T = 0
n,c=map(int,input().split())
for i in range(n):
    s = list(map(int,input().split(":")))
    T += s[0]*60 + s[1]

T-=c*(n-1)

print("%02d:%02d:%02d" % (T//3600, (T%3600) // 60, T%60))