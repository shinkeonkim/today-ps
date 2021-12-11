def gcd(a, b):
    return gcd(b, a % b) if b > 0 else a


input()
l = [*map(int, input().split())]
x = int(input())
ans = [i for i in l if gcd(x, i) == 1]

print(sum(ans) / len(ans))
