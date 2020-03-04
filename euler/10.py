L = [False,False] + [True]*2000000
S = 0
for i in range(2,2000000):
    if L[i]:
        S +=i
        for j in range(i+i,2000000,i):
            L[j] = False
print(S)