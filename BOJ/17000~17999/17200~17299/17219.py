import sys
n,m =map(int,input().split())
d = {}
for i in range(n):
    a,b=sys.stdin.readline().split()
    d[a] = b
for i in range(m):
    print(d[sys.stdin.readline()[:-1]])