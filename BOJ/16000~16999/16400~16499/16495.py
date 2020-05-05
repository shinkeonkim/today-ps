a = input()[::-1]
k = 1
ans = 0
for i in range(len(a)):
    ans += (ord(a[i]) - 64) * k
    k*=26
print(ans)  