def f(a,b):
    return f(b,a%b) if b else a 

a=int(input())
L=list(map(int,input().split()))
for i in range(1,len(L)):
    print("%d/%d" %(L[0]//f(L[0],L[i]),L[i]//f(L[0],L[i])))