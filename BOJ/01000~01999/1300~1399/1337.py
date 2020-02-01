L = [int(input()) for i in range(int(input()))]
d = {}
for i in L:
    d[i] = 1
ans = 4
for i in L:
    for start in range(i-4,i+1):
        cnt = 5
        for j in range(5):
            try:
                d[start + j] +=1
                d[start + j] -=1
                cnt-=1
            except:
                continue 
        if cnt < ans:
            ans = cnt
print(ans)