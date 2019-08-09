while True:
    a = input()
    if a == '-1':
        break
    L = list(map(int, a.split()))[:-1]
    cnt = 0
    for i in L:
        if i*2 in L:
            cnt += 1
    print(cnt)
