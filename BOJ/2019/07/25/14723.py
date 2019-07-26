from math import sqrt
n=int(input())
k=0
check = False
for i in range(1,n+1):
    for j in range(1,i+1):
        k+=1
        if k == n:
            print(i+1-j,j)
            check = True
            break
    if check:
        break