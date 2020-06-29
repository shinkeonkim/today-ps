d = {}
n = int(input())
cnt = 0
while True:
    cnt +=1
    N = "%04d" % n
    middle = int(N[1:3])
    square = middle * middle
    n = square
    try:
        d[square] +=1
    except:
        d[square] = 1
    else:
        break
print(cnt)