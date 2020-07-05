L = []
while True:
    try:
        a = input()
    except:
        break
    L.append(a)

L2 = []
for i in L:
    L2.append(i.split())
for i in range(len(L2)):
    for j in range(len(L2[i])):
        L2[i][j] = L2[i][j].strip()
        print(L2[i][j],end="")

        try:
            cnt = 0
            L = [(len(L2[k][j]) if j < len(L2[k]) else 0)  for k in range(len(L2))]
            maxLen = max(L)
            for k in L:
                if k > 0:
                    cnt +=1

        except:
            maxLen = 0
        
        if j < len(L2[i])-1:
            if cnt == 1:
                print("", end = " ")
            elif maxLen != 0:
                print("", end = " " * (maxLen - len(L2[i][j]) +1))
    print()
