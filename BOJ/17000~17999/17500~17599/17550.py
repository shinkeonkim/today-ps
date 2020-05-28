N = int(input())
L = [int(input()) for i in range(N)]
D = [L[0]*L[0]]
for i in range(1,N):
    D.append(D[-1] + L[i]*L[i])
D = [0] + D

D2=[0]*N
D2[N-1] = L[N-1]
for i in range(N-2, -1,-1):
    D2[i] = D2[i+1] + L[i]

ans = 0
for i in range(len(D2)):
    k = D[i] * D2[i]
    if ans < k:
        ans = k
print(ans)