Mod = 1000000000
n = int(input())

if n == 0:
    print(0)
elif n >0 or abs(n) %2==1:
    print(1)
else:
    print(-1)

L = [0,1]
for i in range(2,abs(n)+1):
    L.append((L[-1]+L[-2])%Mod)
print(L[abs(n)])