N,M=map(int,input().split())
D=[[0]*2 for i in range(11000)]
D[1][0] = 1
D[M][1] = 1
for i in range(2,N+1):
    D[i][0] = (D[i-1][0]+D[i-1][1])% 1000000007
    if i - M >= 0:
        D[i][1] += D[i-M][0] + D[i-M][1]
    D[i][1] %= 1000000007
print((D[N][0]+D[N][1])% 1000000007)