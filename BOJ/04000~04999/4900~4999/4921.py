def A(k):
    print("{}. VALID".format(k))
def B(k):
    print("{}. NOT".format(k))
num = 1
S =[[],[4,5],[],[4,5],[2,3],[8],[2,3],[8],[6,7]]
while(True):
    a = input()
    if a == '0':
        break
    a = list(map(int,list(a)))
    if a[0] != 1 or a[-1] != 2:
        B(num)
        num+=1
        continue

    for i in range(len(a)-1):
        if a[i+1] not in S[a[i]]:
            B(num)
            break
    else:
        A(num)

    num+=1