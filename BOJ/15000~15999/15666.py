def g(check):
    for i in check:
        print(i,end=" ")
    print()

def dfs(k,prev):
    global m,L,check
    if k == m-1:
        for i in range(prev,len(L)):
            check[k] = L[i]
            g(check)
    else:
        for i in range(prev,len(L)):
            check[k] = L[i]
            dfs(k+1,i)


n,m = map(int,input().split())
L = list(set(list(map(int,input().split()))))
L.sort()
check = [0]*m 
dfs(0,0)