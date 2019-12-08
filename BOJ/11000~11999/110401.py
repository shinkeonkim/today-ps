Mod = 1000000007

def f(n):
    k = 1
    for i in range(1,n+1):    
        k *= i
        k %= Mod
    return k

def m(x,n):
    if n == 1:
        return x
    else:
        A = m(x,n//2) %Mod
        if n %2 == 0:
            return (A*A)%Mod
        else:
            return (A*A*x)%Mod


N,K=map(int,input().split())

print((f(N) * m((f(N-K) * f(K)) % Mod,Mod-2))%Mod)
