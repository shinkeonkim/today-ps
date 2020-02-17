x,y = map(int,input().split())
cnt = 0
d = 1
k = 1
X = x
while X!=y:
    z = 0
    if X < x+(d*k):
        for i in range(X,x+(d*k)+1,1):
            # print(i,end=" ")
            z = i
            if i ==y:
                break
            cnt+=1
        else:
            cnt-=1
    else:
        for i in range(X,x+(d*k)-1,-1):
            # print(i,end=" ")
            z = i
            if i ==y:
                break
            cnt+=1
        else:
            cnt-=1
    # print()
    X = z
    k*=-1
    d*=2
print(cnt)