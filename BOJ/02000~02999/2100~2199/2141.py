n = int(input())
D = [list(map(int,input().split())) for i in range(n)]
D.sort(key = lambda t: t[0])
S = 0
for i in D:
    S += i[1]
S = (S+1)//2
S2 = 0
for i in D:
    S2 += i[1]
    if S2 >= S:
        print(i[0])
        break