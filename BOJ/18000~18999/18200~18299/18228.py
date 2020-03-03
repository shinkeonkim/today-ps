n = int(input())
L = list(map(int,input().split()))
k = L.index(-1)
print(min(L[:k])+min(L[k+1:]))