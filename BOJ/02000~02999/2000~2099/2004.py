n,m = map(int,input().split())

two,five = 0,0

k = 2
while k <= n:
    two += n//k
    k*=2
k = 5
while k <= n:
    five += n//k
    k*=5

k = 2
while k <= m:
    two -= m//k
    k*=2

k = 5
while k <= m:
    five -= m//k
    k*=5

k = 2
while k <= n-m:
    two -= (n-m)//k
    k*=2

k = 5
while k <= n-m:
    five -= (n-m)//k
    k*=5

print(min(two,five))