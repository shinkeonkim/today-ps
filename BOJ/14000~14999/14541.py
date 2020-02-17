while True:
    n = int(input())
    if n == -1:
        break
    s = 0
    last = 0
    for i in range(n):
        a,b=map(int,input().split())
        s += a*(b-last)
        last = b
    print(s,"miles")