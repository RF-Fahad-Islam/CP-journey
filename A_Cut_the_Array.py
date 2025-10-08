import sys
test = int(sys.stdin.readline())

for _ in range(test):
    n = int(sys.stdin.readline())
    l = [int(x) for x in sys.stdin.readline().split()]
    left, right = 0, 0

    for i in range(n - 2):              # first cut
        for j in range(i + 1, n - 1):   # second cut
            llist = l[:i+1]
            rlist = l[i+1:j+1]
            lastlist = l[j+1:]

            s1, s2, s3 = sum(llist) % 3, sum(rlist) % 3, sum(lastlist) % 3

            if s1 == s2 == s3:
                left, right = i+1, j+1
                break
            elif {s1, s2, s3} == {0, 1, 2}:
                left, right = i+1, j+1
                break
        if left and right:
            break

    print(left, right)
