from sys import exit
def f(s):
    d = {'H':1, 'O':8, 'C': 4}
    L = []
    c = 1
    i = 0
    while i < len(s):
        if i+1 < len(s) and '0' <= s[i+1] <='9':
            L.append([s[i],int(s[i+1])])
            i+=1
        else: 
            L.append([s[i],1])
        i+=1
    ret = 0
    for i in L:
        ret += d[i[0]] * i[1]
    return ret

l,r = input().split("=")
l1,l2 = l.split("+")
L = list(map(f,[l1,l2,r]))
for i in range(1,11):
    for j in range(1,11):
        for k in range(1,11):
            if L[0] * i + L[1] * j  == L[2] * k:
                print(i,j,k)
                exit()