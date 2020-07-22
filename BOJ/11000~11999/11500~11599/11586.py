L = []
for i in range(int(input())):
    L.append(input())
a=int(input())
if a == 2:
    for i in range(len(L)):
        l = list(L[i])
        l.reverse()
        L[i]="".join(l)
if a == 3:
    L.reverse()

for i in L:
    print(i)