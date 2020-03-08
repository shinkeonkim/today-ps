a,b= input().split()
a = int(a)
ans = ["","",""]
ans[a-1] = b[:]
if a == 1:
    L = []
    s= ""
    for i in b:
        if 'A' <= i <='Z':
            L.append(s)
            s = chr(ord(i)+32)
        else:
            s+=i
    L.append(s)
    ans[1] = "_".join(L)
    ans[2] = chr(ord(b[0])-32) + b[1:]
elif a == 2:
    L = b.split("_")
    for i in L:
        ans[2] += i[0].upper() + i[1:]
    ans[0] = ans[2][0].lower() + ans[2][1:]
else:
    ans[0] = b[0].lower() + b[1:]
    L = []
    s= ""
    for i in ans[0]:
        if 'A' <= i <='Z':
            L.append(s)
            s = chr(ord(i)+32)
        else:
            s+=i
    L.append(s)
    ans[1] = "_".join(L)

for i in ans:
    print(i)