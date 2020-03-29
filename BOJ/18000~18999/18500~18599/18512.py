X,Y,P1,P2 = map(int,input().split())
for i in range(max(P1,P2),999999):
    if (i - P1) % X == 0 and (i - P2) % Y == 0:
        print(i)
        break
else:
    print(-1)