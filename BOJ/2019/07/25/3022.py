ans = 0
D = dict()
S = 0
for i in range(int(input())):
    a = input()
    if a not in D:
        D[a] = 1
    else:
        if S - D[a] < D[a]:
            ans+=1
        D[a]+=1
    S+=1
print(ans)