n = int(input())
L = [int(input()) for i in range(n)]
ans = max(L)
S = 0
for i in L:
    S+=i
    if S > ans:
        ans = S
    if S < 0:
        S =0
print(ans)