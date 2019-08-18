D = dict()
for i in range(int(input())):
    a = input()
    if a in D:
        D[a]+=1
    else:
        D[a]=1

M = 0
s = ""
L=list(D.items())
L.sort(key=lambda t:t[0])
for i in L:
    if M<=i[1]:
        M=i[1]
        s=i[0]
print(s,M)