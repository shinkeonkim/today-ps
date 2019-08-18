from math import sqrt
for i in range(int(input())):
    a,b=list(map(int,input().split()))
    S=b-a
    if S == 1:
        print(1)
    elif S == 2:
        print(2)
    elif S == 3:
        print(3)
    elif S == int(sqrt(S))**2:
        print(int(sqrt(S)) * 2 -1)
    elif S <= int(sqrt(S))**2 + int(sqrt(S)):
        print(int(sqrt(S)) * 2)
    else:
        print(int(sqrt(S)) * 2+1)
