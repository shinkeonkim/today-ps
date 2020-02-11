L = []
while True:
    try:
        a = input().split()
        L.extend(a)
    except:
        break

L2 = []
for i in L[1:]:
    k = list(i)
    k.reverse()
    L2.append(int("".join(k)))

L2.sort()
for i in L2:
    print(i)