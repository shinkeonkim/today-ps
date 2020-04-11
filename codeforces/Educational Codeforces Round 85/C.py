import sys
T = int(sys.stdin.readline())
for t in range(T):
    N = int(sys.stdin.readline())
    L = [list(map(int,sys.stdin.readline().split())) for i in range(N)]
    D = []
    S = 0
    ans = 11111111111111111111
    for x in range(N):
        S += max(0,L[x][0] - L[x-1][1])
    
    for x in range(N):
        k = L[x][0] + (S - max(0,L[x][0] - L[x-1][1]))
        ans = min(ans,k)

    sys.stdout.write(str(ans)+"\n")