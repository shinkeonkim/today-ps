def f(K, N, C):
    if N ==1:
        return K % C
    elif N%2 == 0:
        x = f(K,N//2,C)
        return (x*x)%C
    else:
        x = f(K,N//2,C)
        return (x*x*K)%C
A,B,C=map(int,input().split())
print(f(A,B,C))