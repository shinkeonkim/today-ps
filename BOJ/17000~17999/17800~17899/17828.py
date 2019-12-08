import sys
N,X = map(int,input().split())
ans = ""

if X <N or X > N*26:
    print("!")
    sys.exit()

for i in range(N):
    k = min(X - (N-i-1), 26)
    ans = chr(k + 64) + ans
    X -= k
print(ans)
