def f(l):
    l[2] += 1
    if l[2] >= 60:
        l[2] = 0
        l[1] += 1
    if l[1] >= 60:
        l[1] = 0
        l[0] += 1
    if l[0] >= 24:
        l[0] = 0

for _ in range(3):
    a,b = input().split()
    a = list(map(int,a.split(":")))
    b = list(map(int,b.split(":")))

    cnt = 0 
    while a != b:
        if int("%02d%02d%02d" % (a[0],a[1],a[2])) % 3 ==0:
            cnt +=1
        f(a)
    if int("%02d%02d%02d" % (a[0],a[1],a[2])) % 3 ==0:
        cnt +=1

    print(cnt)