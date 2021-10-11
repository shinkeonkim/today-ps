n = int(input())
ans = 0

while  n != 1:
  n = n + 1 if n % 2 else n // 2
  ans += 1

print(ans)
