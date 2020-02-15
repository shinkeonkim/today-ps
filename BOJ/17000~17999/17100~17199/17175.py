a,b,ans,Mod=1,1,0,1000000007
n = int(input())
for i in range(2,n+1):
    ans = (a+b+1)%Mod
    a=b
    b=ans
if n <2:
    print(1)
else:
    print(ans)