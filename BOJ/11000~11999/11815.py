from math import *
a=input()
L=list(map(int,input().split()))
for i in L:
    if int(sqrt(i))**2 == i:
        print(1,end=" ")
    else:
        print(0,end=" ")