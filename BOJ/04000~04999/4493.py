def f(L):
    a= L[0]
    b= L[1]
    if a==b:
        return 0
    D = ['R','S','P']
    for i in range(3):
        if D[i-1]==a and D[i] ==b:
            return 1
    return 2

for _ in range(int(input())):
    n = int(input())
    L = [0]*3
    for i in range(n):
        L[f(input().split())] += 1
    if L[1] > L[2]:
        print("Player 1")
    elif L[2] > L[1]:
        print("Player 2")
    else:
        print("TIE")
