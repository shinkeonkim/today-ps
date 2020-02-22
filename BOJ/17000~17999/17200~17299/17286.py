import itertools,math
L = [1,2,3]
p = list(itertools.permutations(L,3))
D = [list(map(int,input().split())) for i in range(4)]

ans = 999999999999

for pp in p:
    k = [0]+list(pp)
    d = 0
    for i in range(1,4):
        d += math.sqrt((D[k[i-1]][0] - D[k[i]][0])**2 + (D[k[i-1]][1] - D[k[i]][1])**2)
    if d < ans:
        ans = d
print(int(ans))