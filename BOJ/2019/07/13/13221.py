a,b=list(map(int,input().split()))
k=int(input())
n,m=list(map(int,input().split()))
for i in range(1,k):
    c,d=list(map(int,input().split()))
    if abs(c-a)+abs(d-b) < abs(n-a)+abs(m-b):
        n=c
        m=d
print(n,m)