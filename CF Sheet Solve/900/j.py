import sys
input = lambda: sys.stdin.readline().strip()
T = int(input())

def tax_to_income(T):
    if T == 0:
        return 0.0

    if T <= 7500:
        return 12500 + 5 * T

    if T <= 27500:
        return 50000 + 2.5 * (T - 7500)
    if T<= 42500:
        return (T + 32500) / 0.60
    if T<=52500:
        return (T -32500) / 0.4+100000
    return (T-52500)/0.45+150000

for _ in range(T):
    x = float(input())
    print(tax_to_income(x))