def f(a,b,n):
    return ((a*n)//b) - a*(n//b)

A,B,N = map(int,input().split())

if(N < B-1):
    print(f(A,B,N))
else:
    print(f(A,B,B-1))