a,b=map(int,input().split())
S = 1
for i in range(a,b+1):
    S *= i*(i+1)//2
    S %= 14579
print(S)