import sys
from collections import Counter
input = lambda: sys.stdin.readline().strip()

test = int(input())
for _ in range(test):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    
    existing = set(l)
    ans = []

    i = 1
    while i <= n and k != 0:
        if i not in existing:
            ans.append(i)
            k -= 1
        i += 1

    if k > 0:
        s = "".join(map(str, l))
        chars = Counter(s)
        min_freq = min(chars.values())
        min_chars = [int(char) for char, count in chars.items() if count == min_freq]

        i = 0
        while k > 0:
            try:
                ans.append(min_chars[i])
            except:
                ans.append()
            i += 1
            k -= 1

    print(*ans)
