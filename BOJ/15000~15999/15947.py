n=int(input())
n-=1
L = ['baby','sukhwan','tururu','turu','very','cute','tururu','turu','in','bed','tururu','turu','baby','sukhwan']
C = [0,0,2,1,0,0,2,1,0,0,2,1,0,0]
if n%14 in (2,3,6,7,10,11):
    cnt = n//14 + C[n%14]
    if cnt >=5:
        print("tu+ru*"+str(cnt))
    else:
        print(L[n%14],end="")
        print("ru"*(n//14),end="")
else:
    print(L[n%14],end="")