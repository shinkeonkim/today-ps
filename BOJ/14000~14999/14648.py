N,Q = map(int,input().split())
L = list(map(int,input().split()))
for q in range(Q):
    query = list(map(int,input().split()))
    if query[0] == 2:
        a,b,c,d = query[1:]
        a-=1;b-=1;c-=1;d-=1
        print(sum(L[a:(b+1)]) - sum(L[c:(d+1)]))
    else:
        a,b = query[1:]
        a-=1;b-=1
        print(sum(L[a:(b+1)]))
        L[a],L[b] = L[b],L[a]
