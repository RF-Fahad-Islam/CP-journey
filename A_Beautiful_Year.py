import sys
y = int(sys.stdin.readline())

unique_dig_found = 0
while not unique_dig_found:
    y += 1
    temp = y
    y_set = set()
    while(temp != 0):
        y_set.add(temp%10)
        temp//=10
    if(len(y_set)==4):
        unique_dig_found=1
print(y)

