a,b,c=map(int,input().split())
S = -671
for i in range(11,a):
    S+=1440
S += b*60 +c
if S<0:
    print(-1)
else:
    print(S)

