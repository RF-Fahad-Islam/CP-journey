import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    w,s = input().split()
    new_w = ""
    w = reversed(w)
    for ch in w:
        if ch not in new_w:
            new_w+=ch
    new_w = "".join(list(reversed(new_w)))
    print(new_w)
    indices = [new_w.find(ch) for ch in s]
    print(indices)
    if indices == sorted(indices): print("YES")
    else: print("NO")
    