N,M = map(int,input().split())
L = [0]
dice = []
current = 1
for i in range(N):
    L.append(int(input()))

for i in range(M):
    dice.append(int(input()))

for i in range(M):
    if current >=N:
        print(i)
        break
    
    current += dice[i]
    if current >=N:
        print(i+1)
        break

    current += L[current]
    if current >=N:
        print(i+1)
        break
