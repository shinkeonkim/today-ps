N = int(input())
Mx = 0
Pos = 0
for k in range(2,N+1):
    S = 0
    A = N
    while A>0:
        S += A%k
        A//=k
    if S > Mx:
        Mx = S
        Pos = k
print(Mx,Pos)
