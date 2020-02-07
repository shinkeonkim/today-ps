import sys
Mx = 999999999

H, N = map(int,sys.stdin.readline().split())
L = [list(map(int,sys.stdin.readline().split())) for i in range(N)]

D = [Mx] * 40000

D[0] = 0

for i in range(H+1):
    for spell in L:
        if D[i] + spell[1] < D[i+spell[0]]:
            D[i+spell[0]] = D[i] + spell[1]

sys.stdout.write(str(min(D[H:])))