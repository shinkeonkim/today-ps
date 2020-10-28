N,W,H=list(map(int,input().split()))
for i in range(N):
    a=int(input())
    if a*a <= W*W + H*H:
        print("YES")
    else:
        print("NO")