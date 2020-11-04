N,M = map(int,input().split())
L = [int(input()) for i in range(int(input()))]
ans = 0
S = 1
E = 1+M-1
for i in L:
    if S <= i <= E:
        continue
    else:
        if i < S:
            k = S-i
            ans += k
            S -= k
            E -= k
        else:
            k = i - E
            ans += k
            S += k
            E += k
print(ans)