while True:
    try:
        n,k = map(int,input().split())
    except:
        break
    
    S = n
    stamp = n
    while stamp >= k:
        cnt = stamp // k
        stamp = stamp % k
        stamp += cnt
        S += cnt
    print(S)