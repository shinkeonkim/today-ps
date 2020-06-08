def f(coin, money):
    dp = [3300000]*330000
    dp[0] = 0
    for i in range(0,money+1):
        for j in coin:
            if i + j > money:
                continue
            dp[i+j] = min(dp[i+j], dp[i] +1)
    return dp[money]

N = int(input())
L = [0,1]
for i in range(2,130):
    L.append(L[-1]+i)
D = [0,1]
for i in range(2,130):
    D.append(D[i-1]+L[i])
print(f(D[1:],N))


