L = [int(input()) for i in range(3)]
ans = 987654321
for i in range(3):
    S = 0
    for j in range(3):
        S += 2*L[j]*abs(i-j)
    if S < ans:
        ans = S
print(ans)