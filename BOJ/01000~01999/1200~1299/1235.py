n = int(input())
L = [input() for i in range(n)]
k = len(L[0])
check = False
for i in range(k,-1,-1):
    S = set()    
    for j in range(n):
        S.add(L[j][i:k+1])
    if len(S) == n:
        print(k-i)
        check = True
        break
    if check:
        break