N = int(input())
L = list(map(int,input().split()))
for i in range(0,L[0]+1):
    S = [i]
    for j in range(N-1):
        S.append(L[j]-S[-1])
    if(len(S) == len(set(S))):
        for k in S:
            print(k,end = " ")
        break