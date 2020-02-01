n = int(input())
m = int(input())

L = list(map(int,input().split()))
d = {}

for i in L:
    d[i] = 1

ans = 0
for i in L:
    k = 0
    try:
        k = d[m-i]
        if i != m-i:
            ans+=1
    except:
        continue
print(ans//2)