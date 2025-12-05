import sys
input = lambda: sys.stdin.readline().strip()

def is_palindrome(s):
    return s == s[::-1]

t = int(input())
for _ in range(t):
    n = int(input())
    s = input().strip()

    if is_palindrome(s):
        print(0)
        continue

    found = False
    for ch in '01':
        l, r = 0, n - 1
        temp = []
        while l <= r:
            if s[l] == s[r]:
                l += 1
                r -= 1
            elif s[l] == ch:
                temp.append(l + 1)
                l += 1
            elif s[r] == ch:
                temp.append(r + 1)
                r -= 1
            else:
                break
        else:
            print(len(temp))
            print(*sorted(temp))
            found = True
            break
    if not found:
        print(-1)
