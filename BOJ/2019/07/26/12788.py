N=int(input())
M,K=list(map(int,input().split()))
L = list(map(int,input().split()))
L.sort(reverse = True)
S = M*K
for i,j in enumerate(L):
    S -= j
    if S<=0:
        print(i+1)
        break
else:
    print("STRESS")