N,L,K=list(map(int,input().split()))
ar=[]
cnt1=cnt2=0
for i in range(N):
    ar.append(list(map(int,input().split())))

for i in ar:
    if i[0] <= L and i[1] <= L:
        cnt1+=1
    elif i[0] <=L:
        cnt2+=1

solve=0
a = min(cnt1,K)
solve+=a*140
K -= a
a = min(cnt2,K)
solve+=a*100
print(solve)