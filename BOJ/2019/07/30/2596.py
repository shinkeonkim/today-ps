L = {"000000":"A","001111":"B","010011":"C","011100":"D","100110":"E","101001":"F","110101":"G","111010":"H"}
n = int(input())
a = input()
s = ""

for i in range(0,len(a),6):
    k = a[i:i+6]
    if k in L:
        s+=L[k]
    else:
        check = False
        for y in L.keys():
            cnt = 0
            for x in range(6):
                if k[x] != y[x]:
                    cnt+=1
            if cnt is 1:
                check = True
                s+=L[y]
        if not check:
            print(i//6 +1)
            break
else:
    print(s)