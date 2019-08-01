n=int(input())
S=0
for i in range(1,n+1):
    if n%i is 0:
        S += i
print(S*5-24)