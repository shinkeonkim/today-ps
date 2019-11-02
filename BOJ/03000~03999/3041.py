L = []
ans = 0

for i in range(4):
    L.append(input())

for i in range(4):
    for j in range(4):
        if L[i][j] !='.':
            num = ord(L[i][j]) - 65
            ans += abs(num//4 - i) + abs(num%4 - j)
print(ans)
