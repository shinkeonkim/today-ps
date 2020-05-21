def f(n):
    if n ==1:
        return [1,1]
    
    S = 0
    cnt = 1
    while S < n:
        S+=cnt
        cnt+=1
    cnt-=1
    ret = [cnt-S+n,S-n+1]
    return ret

def g(A,B):
    C = [A[0]+B[0], A[1]+B[1]]
    S = sum(C)
    ret = S*(S-1)//2 - (S-1-C[0])
    return ret    


t = int(input())
for _ in range(t):
    a,b = map(int,input().split())
    A = f(a)
    B = f(b)
    print(g(A,B))