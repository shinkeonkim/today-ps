n,m = map(int,input().split())
L = list(map(int,input().split()))
d = {}
for i in L:
    try:
        d[i]+=1
    except:
        d[i] =1

L = list(d.items())
L.sort(key = lambda t : -t[1])
for i in L:
    print((str(i[0])+" ")*i[1],end="")