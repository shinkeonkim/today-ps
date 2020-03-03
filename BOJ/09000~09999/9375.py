for t in range(int(input())):
    d = {}
    n = int(input())
    for i in range(n):
        a,b = input().split()
        try:
            d[b]+=1
        except:
            d[b]=1
    c = 1
    for i in d:
        c*=(d[i]+1)
    print(c-1)