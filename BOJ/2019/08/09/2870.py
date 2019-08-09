L=[]
for _ in range(int(input())):
    a=input()
    s=0
    cnt=0
    for i in a:
        if ord('0') <= ord(i) <= ord('9'):
            cnt+=1
            s*=10
            s+=int(i)
        else:
            if cnt>0:
                L.append(s)
                cnt=0
                s=0
    if cnt > 0:
        L.append(s)
        cnt=0
        s=0
L.sort()
for i in L:
    print(i)