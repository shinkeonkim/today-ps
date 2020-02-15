e_h,K = map(int,input().split())
h,m,s,e_m,e_s,ans = 0,0,0,59,59,0

while e_h != h or e_m != m or e_s != s:
    z = "%02d%02d%02d" % (h,m,s) 
    if z.count(str(K)) >0:
        # print(z)
        ans+=1
    s+=1
    if s==60:
        m+=1
        s=0
    if m==60:
        h+=1
        m=0
z = "%02d%02d%02d" % (h,m,s) 
if z.count(str(K)) >0:
    ans+=1
print(ans)