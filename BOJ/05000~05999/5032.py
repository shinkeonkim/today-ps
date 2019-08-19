a,b,c=map(int,input().split())
S=0
k=a+b
while k>=c:
    S += k//c
    k = k//c + k%c
print(S)