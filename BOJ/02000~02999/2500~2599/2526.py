N,P = map(int,input().split())
O = N
D ={}
D[N] = 0
cnt = 1
finished = 0
while True:
    N = (O*N) % P
    try:
        D[N] += 1
    except:
        D[N] = cnt
        cnt +=1
    else:
        D[N] -=1
        finished = D[N]
        break
print(cnt - finished)