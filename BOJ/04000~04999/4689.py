L = []
k = "0123456789ABCDEF"
while True:
    try:
        a,b,c = input().split()
    except:
        break
    
    a = int(a,int(b))
    c = int(c)
    s = ""
    if a == 0:
        L.append("0")
    else:
        while a>0:
            s += k[a%c]
            a //=c
        L.append(s[::-1])
for i in L:
    if len(i) > 7:
        print("  ERROR")
    else:
        print("{}{}".format((7-len(i))*" ", i))