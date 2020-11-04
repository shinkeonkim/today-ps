for _ in range(int(input())):
    n = int(input())
    L = list(map(int,input().split()))
    ans = 0
    for i in range(len(L)-1):
        for j in range(len(L)-1):
            if L[j] > L[j+1]:
                ans+=1
                L[j],L[j+1] = L[j+1],L[j]
    print(ans)