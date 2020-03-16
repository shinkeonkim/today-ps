n = int(input())
L = [list(map(int,input().split())) for i in range(n)]

S = []
for i in range(1,n):
    S.append((L[i][1]-L[i-1][1]) // (L[i][0]-L[i-1][0]))
print(max(S))