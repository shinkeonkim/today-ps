a=int(input())
for i in range(a):
    N,D=list(map(int,input().split()))
    cnt = 0
    for i in range(N):
        v,f,c=list(map(int,input().split()))
        if D * c <= v*f:
            cnt+=1
    print(cnt)