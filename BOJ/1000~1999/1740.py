def f(x):
    if x > 0:
        f(x//2)
    print(x%2)

a = int(input())
c = 1
ans = 0
while a>0:
    ans += c * (a%2)
    c *= 3
    a//=2
print(ans)