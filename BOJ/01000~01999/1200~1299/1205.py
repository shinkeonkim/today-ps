N,new,p = map(int,input().split())
try:
    L = sorted(list(map(int,input().split())),reverse=True)
except:
    L = []
k = 0
for i in range(len(L)):
    if L[i] <= new:
        k = i+1
        break
else:
    k = N+1

if k > p or (N>=p and  L[p-1] >= new):
    print(-1)
else:
    print(k)