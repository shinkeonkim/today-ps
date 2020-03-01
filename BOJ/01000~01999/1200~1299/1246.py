d ={}
answer = 0
pos = 0
N,M = map(int,input().split())
for i in range(M):
    a = int(input())
    try:
        d[a] +=1
    except:
        d[a] = 1
cnt = 0
d = sorted(list(d.items()),key = lambda t:t[0])

for i in d:
    if i[0]*min(M-cnt,N) > answer:
        pos = i[0]
        answer = i[0]*min(M-cnt,N)
    cnt+=i[1]
print(pos,answer)