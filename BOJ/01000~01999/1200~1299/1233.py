a,b,c=map(int,input().split())
d = dict()
for i in range(1,a+1):
    for j in range(1,b+1):
        for k in range(1,c+1):
            try:
                d[i+j+k]+=1
            except:
                d[i+j+k] =1
M = 0
ans = 0
for i in d.items():
    if M < i[1]:
        M = i[1]
        ans = i[0]
print(ans)