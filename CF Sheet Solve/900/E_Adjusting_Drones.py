import sys

# Increase recursion depth just in case, though not needed for this iterative solution
sys.setrecursionlimit(2000)

def solve():
    # Fast I/O
    input = sys.stdin.readline
    
    t_cases = int(input())
    
    for _ in range(t_cases):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        
        # Count frequencies of each initial energy level
        # Using a simple list/dictionary approach
        counts = {}
        max_val = 0
        for x in a:
            counts[x] = counts.get(x, 0) + 1
            if x > max_val:
                max_val = x
                
        # Convert counts to a list of tuples for faster iteration
        # (value, count)
        freq_list = list(counts.items())
        
        # The maximum possible position any drone can reach is roughly max_val + n
        # We need a difference array large enough.
        limit = max_val + n + 5
        
        # Binary Search for the number of operations
        # range [0, n] is sufficient because in n steps all piles would flatten significantly
        low = 0
        high = n
        ans = n
        
        while low <= high:
            mid = (low + high) // 2
            
            # Check if 'mid' operations are sufficient
            # We use a difference array to reconstruct the frequencies
            # We only need to allocate up to limit
            diff = [0] * limit
            
            possible = True
            
            for val, count in freq_list:
                # Logic:
                # A pile of size 'count' at 'val' after 'mid' steps:
                # 1. Leaves a trail of 1s from val to val + min(mid, count) - 1
                # 2. Moves the bulk remainder (count - mid) to val + mid
                
                # Part 1: The trail of 1s
                length_of_trail = min(mid, count)
                if length_of_trail > 0:
                    diff[val] += 1
                    diff[val + length_of_trail] -= 1
                
                # Part 2: The bulk remainder
                if count > mid:
                    bulk_pos = val + mid
                    bulk_rem = count - mid
                    diff[bulk_pos] += bulk_rem
                    diff[bulk_pos + 1] -= bulk_rem
            
            # Sweep to calculate actual values and check constraint k
            current_h = 0
            for i in range(limit):
                current_h += diff[i]
                if current_h > k:
                    possible = False
                    break
            
            if possible:
                ans = mid
                high = mid - 1
            else:
                low = mid + 1
                
        print(ans)

if __name__ == "__main__":
    solve()