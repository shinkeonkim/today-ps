a,b = map(int,input().split())
d = {}
for i in range(1,a+1):
    for j in range(1,b+1):
        try:
            d[i+j]+=1
        except:
            d[i+j] = 1

M = max(d.values())
d = sorted(list(d.items()),key = lambda t:t[0])
for i in d:
    if i[1] == M:
        print(i[0])