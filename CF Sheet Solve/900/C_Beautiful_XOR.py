import sys

def solve():
    try:
        a, b = map(int, sys.stdin.readline().split())
    except:
        return

    if a == b:
        print(0)
        return

    if a < b:

        if a.bit_length() < b.bit_length():
            print(-1)
        else:
            print(1)
            print(a ^ b)
        return

    else:
        x = a ^ b
        if x <= a:
            print(1)
            print(x)
        else:
           
            msb_mask_b = 1 << (b.bit_length() - 1)
            x1 = msb_mask_b
            intermediate_a = a ^ x1
            x2 = intermediate_a ^ b
            
            print(2)
            print(x1, x2)
        return


def main():
    try:
        num_test_cases_str = sys.stdin.readline()
        if not num_test_cases_str:
            return
        num_test_cases = int(num_test_cases_str)
        for _ in range(num_test_cases):
            solve()
    except:
        return

if __name__ == "__main__":
    main()