D=["Soongsil","Korea","Hanyang"]
L=list(map(int,input().split()))
if sum(L) >= 100:
    print("OK")
else:
    print(D[L.index(min(L))])