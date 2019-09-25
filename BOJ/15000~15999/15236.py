n=int(input())
S = 0
for i in range(n+1):
    for j in range(i,n+1):
        S +=i+j
print(S)