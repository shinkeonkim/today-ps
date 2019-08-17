d=dict()
while True:
    try:
        a=input()
        for i in a:
            if ord('a') <= ord(i) <=ord('z'):
                if i in d:
                    d[i]+=1
                else:
                    d[i]=1
    except:
        break
L = list(d.items())
K = max(d.values())
L.sort(key = lambda t: t[0])
for i in L:
    if i[1] == K:
        print(i[0],end="")
