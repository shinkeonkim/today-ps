n,m =map(int,input().split())
l = [0]*11000
c = 0
for i in range(1,n+1):
    for j in range(int(input())):
        l[c]=i
        c+=1

for i in range(m):
    print(l[int(input())])