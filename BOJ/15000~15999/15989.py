for i in range(int(input())):
    N = int(input())
    ans = 0
    for three in range(0, N+1, 3):
        left = N - three
        ans += left // 2 + 1
    print(ans)