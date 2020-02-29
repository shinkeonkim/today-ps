for t in range(int(input())):
    P,M=map(int,input().split())
    d = {}
    ans = 0
    for i in range(P):
        a = int(input())
        try:
            d[a]+=1
        except:
            ans +=1
            d[a]=1 
    print(P-ans)
