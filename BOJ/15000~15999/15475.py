n = int(input())
L = [0] + list(map(int,input().split())) + [0]
D = []
M = 0
for i in range(len(L)):
    if L[i] == 0:
        D.append(i)
for i in range(len(D)-1):
    if D[i+1] - D[i] > M:
        M = D[i+1] - D[i]
print(M)