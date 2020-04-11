t = int(input())
for i in range(t):
    n,x = map(int,input().split())
    L = list(map(int,input().split()))
    L.sort()
    S = 0
    c = 0
    for i in range(n):
        if L[i] >= x:
            c+=1
            S += L[i] - x
    
    for i in range(n-1,-1,-1):
        if L[i] < x:
            if x-L[i] <= S and S > 0:
                S -= (x-L[i])
                c+=1
    print(c)