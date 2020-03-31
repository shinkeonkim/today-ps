t = int(input())
for i in range(t):
    a,b = map(int,input().split())
    k = a%10
    for i in range(b-1):
        k*=a
        k%=10
    if k == 0:
        k = 10
    print(k)