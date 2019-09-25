L = list(map(int,input().split()))
x,y,r = list(map(int,input().split()))
if x in L:
    print(L.index(x)+1)
else:
    print(0)