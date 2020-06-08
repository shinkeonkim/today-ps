N = int(input())
L = list(map(int,input().split()))
for i in range(L[0],0,-1):
    chk = True
    S = [i]
    for j in range(N-1):
        if(L[j] - S[-1] <= 0):
            chk = False
        S.append(L[j]-S[-1])
    if not chk:
        continue 
    for k in S:
        print(k,end = " ")
    break