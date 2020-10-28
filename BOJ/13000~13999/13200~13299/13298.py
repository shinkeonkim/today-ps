for t in range(int(input())):
    x,y,x2,y2,Sx,Sy=map(int,input().split())
    cnt = 0
    ans = []
    for i in range(1,20001):
        if Sx - x*i > 0 and (Sx-x*i) % x2 == 0 and Sy - y*i > 0 and (Sy-y*i) % y2 == 0 and (Sx-x*i) // x2 == (Sy-y*i) // y2: 
            cnt+=1
            ans =  [i,(Sx-x*i) // x2]
    if cnt!=1:
        print("?")
    else:
        print(ans[0],ans[1])