def f(a):
    global L
    if a>0:
        f(a//2)
        L.append(a%2)
k,n=list(map(int,input().split()))
L=[0]
for i in range(1,n*k*5+1):
    f(i)
for i in range(5):
    print(L[i*k+n-1],end=" ")