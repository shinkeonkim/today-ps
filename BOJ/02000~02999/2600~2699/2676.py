def solve(l):
    n,m = l
    if n<0 or m <0 or m >n:
        return 0
    if m == 0 or n == m or n<=1:
        return 1
    k = n-1

    s = 1
    for i in range(m):
        s += k
        k -= 2
    return s    


for _ in range(int(input())):
    print(solve(map(int,input().split())))