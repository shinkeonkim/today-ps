n,m = map(int,input().split())
L = [input() for i in range(n)]
d = {}
for i in range(5):
    d[i] = 0
for i in range(0, n-1):
    for j in range(0, m-1):
        cnt1,cnt2 = 0,0
        for y in range(2):
            for x in range(0,2):
                if L[i+y][j+x] == '#':
                    cnt1+=1
                if L[i+y][j+x] == 'X':
                    cnt2+=1
        if cnt1 > 0:
            continue
        d[cnt2]+=1
for i in range(5):
    print(d[i])