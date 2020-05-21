tc = int(input())

for t in range(1,tc+1):
    n = int(input())
    if n == 0:
        print("Case #{}: INSOMNIA".format(t))
        continue
    S = set()
    n2 = n
    while n2 >0:
        S.add(n2%10)
        n2//=10
    cnt = 1
    while(len(S) <10):
        cnt+=1
        n2 = n*cnt
        while n2 >0:
            S.add(n2%10)
            n2//=10

    print("Case #{}: {}".format(t,cnt*n))