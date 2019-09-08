a=int(input())
S=0
for i in range(a,0,-1):
    for j in range(i+1):
        S+=i+j
print(S)