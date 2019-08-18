n,m=list(map(int,input().split()))
a = []
for i in range(n):
    a.append(input())
a.sort()
print(a[m-1])