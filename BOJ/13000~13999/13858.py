a,b,c = map(int,input().split())
k = a*b
print((k//c),end = ".")
k %= c
k*=10
cnt = 0
if(k == 0):
    print(0)
while k > 0 and cnt < 10:
    print(k//c,end="")
    k %=c
    k*=10
    cnt +=1