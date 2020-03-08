t = 1
while True:
    n = int(input())
    if n == 0:
        break
    d = [0] * n
    names = [input() for i in range(n)]
    for i in range(2*n-1):
        d[int(input().split()[0])-1] +=1
    for i in range(n):
        if d[i] == 1:
            print(t,names[i])
    t+=1