L = list(map(int,input().split()))
b = sorted(list(map(int,input().split())),reverse = True)
c = sorted(list(map(int,input().split())),reverse = True)
d = sorted(list(map(int,input().split())),reverse = True)
m = min(L)

print(sum(b+c+d))
s = 0

for i in range(m):
    s += (b[i]+c[i]+d[i])*9 // 10

s += sum(b[m:])
s += sum(c[m:])
s += sum(d[m:])

print(s)