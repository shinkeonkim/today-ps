import itertools, sys
n,m = map(int,input().split())
L = list(map(int,input().split()))
L.sort()

ret = []
for i in itertools.permutations(L,m):
    ret.append(list(i))
ret.sort()

for i in range(len(ret)):
    if i == 0:
        for j in ret[i]:
            print(j,end = " ")
        print()       
    elif ret[i][:] != ret[i-1][:]:
        for j in ret[i]:
            print(j,end = " ")
        print()