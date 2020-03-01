a,b=map(int,input().split())
for i in range(1,min(a,b)+1):
    if a%i == b%i == 0:
        print(i,a//i,b//i)