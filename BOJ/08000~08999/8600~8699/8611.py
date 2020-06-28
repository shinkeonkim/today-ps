n = int(input())

cnt = 0

for i in range(2,11):
    n2 = n
    L = []
    while(n2 > 0):
        L.append(n2%i)
        n2//=i
    if L == L[::-1]:
        print(i,end=" ")
        for k in L:
            print(k, end = "")
        print()
        cnt+=1

if cnt == 0:
    print("NIE")