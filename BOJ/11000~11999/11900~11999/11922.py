a,b = input().split()
D1 = {"A": 11, "K": 4, "Q": 3, "J": 20, "T": 10, "9": 14, "8": 0, "7": 0}
D2 = {"A": 11, "K": 4, "Q": 3, "J": 2, "T": 10, "9": 0, "8": 0, "7": 0}
S = 0
for i in range(int(a)*4):
    L = list(input())
    if L[1] == b:
        S += D1[L[0]]
    else:
        S += D2[L[0]]
print(S)