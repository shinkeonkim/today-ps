def f(mid):
    if mid < 1:
        return 1
    elif mid == 1:
        return 4
    else:
        a = f(mid//2)
        if mid % 2 == 0:
            return a*a
        else:
            return a*a*4


for t in range(int(input())):
    k = int(input())
    L = list(map(int, input().split()))
    S = sum(L)

    ans = 0
    s = 0
    e = 5000000

    while s <= e:
        mid = (s+e) // 2
        if S * (f(mid) - 1) <= 3*k and ans <= mid:
            ans = mid
            s = mid + 1
        else:
            e = mid - 1
    print(ans+1)
