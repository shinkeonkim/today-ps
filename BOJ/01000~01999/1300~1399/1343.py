import sys
a=input()
L=[]
K=a[0]
cnt=1
s=""
for i in range(1,len(a)):
    if K == a[i]:
        cnt+=1
    else:
        L.append([K,cnt])
        K = a[i]
        cnt = 1
L.append([K,cnt])

for i in L:
    if i[0] == '.':
        s += i[0]*i[1]
    else:
        if i[1] %2 == 1:
            print(-1)
            sys.exit()
        else:
            s += "AAAA"*(i[1]//4)
            s += "BB"*((i[1]%4)//2)
print(s)