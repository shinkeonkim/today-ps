dx = [0,1,0,-1]
dy = [1,0,-1,0]
d,cnt,i,x,y,k=[0]*6
n = int(input())
while cnt<n and i <n:
    if cnt%2 ==0:
        k+=1
    for j in range(k):
        # print(x,y)
        x+=dx[d]
        y+=dy[d]
        i+=1
        if i >= n:
            break
    d=(d+1)%4
    cnt+=1
print(x,y)