X,K = map(int,input().split())
Z = "0"*50+bin(X)[2:]

k = 1
L = []
for i in Z[::-1]:
    if i == "0":
        L.append(k)
    k*=2

K = bin(K)[2:]
ans = 0
for idx,i in enumerate(K[::-1]):
    if i == "1":
        ans += L[idx]

print(ans)