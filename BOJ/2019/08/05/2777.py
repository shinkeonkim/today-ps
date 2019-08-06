for _ in range(int(input())):
    L=[]
    a=int(input())
    if a <10:
        print(1)
        continue
    cnt=0
    for i in range(9,1,-1):
        while a%i ==0:
            a//=i
            cnt+=1
    if a!=1:
        print(-1)
    else:
        print(cnt)