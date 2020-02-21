cnt = 0
s = 0
n =input()
L = list(map(int,input().split()))
for i in L:
    if i >=0:
        cnt+=1
        s+=i
print("%.7f" % (s/cnt))