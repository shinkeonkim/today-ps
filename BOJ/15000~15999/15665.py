def g(check):
    for i in check:
        print(i,end=" ")
    print()

def dfs(k):
    global m,L,check
    if k == m-1:
        for i in L:
            check[k] = i
            g(check)
    else:
        for i in L:
            check[k] = i
            dfs(k+1)


n,m = map(int,input().split())
L = list(set(list(map(int,input().split()))))
L.sort()
check = [0]*m 
dfs(0)