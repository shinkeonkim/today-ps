D = [[[0]*110 for i in range(110)] for j in range(110)]
N,L,R = map(int,input().split())
D[1][1][1] = 1
Mod = 1000000007
for i in range(2,N+1):
    for j in range(1,L+1):
        for k in range(1,R+1):
            D[i][j][k] = (D[i-1][j][k-1] + D[i-1][j-1][k] + (i-2)*D[i-1][j][k]) %Mod
            # 1. i 번째 건물을 추가할 때, 제일 작은 건물을 추가한다고 생각한다.
            # 2. i번째 건물을 추가할 때, 맨 왼쪽, 오른쪽, 중간에 추가하는 경우의 수를 나누어 고려
print(D[N][L][R])