T = int(input())
MOD = 1000000007
L = [1,1]
for i in range(2,11000):
    L.append(i*L[-1])

for t in range(T):
    n = int(input())
    if n % 2 == 1:
        print(0)
    else:
        n//=2
        print((L[n*2] // L[n] // L[n+1])%MOD)
