import sys
input = sys.stdin.readline
test_cases = int(input())

for _ in range(test_cases):
    n = int(input())
    arr = list(map(int, input().split()))
    changed = True
    while changed:
        changed = False
        for i in range(1, len(arr)-1):
            if arr[i-1] < arr[i] and arr[i] > arr[i+1]:
                arr[i], arr[i+1] = arr[i+1], arr[i]
                changed = True
                
    sorted_arr = sorted(arr)
    if arr == sorted_arr:
        print("YES")
    else:
        print("NO")
    