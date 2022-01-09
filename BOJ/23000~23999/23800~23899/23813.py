s = input()
ans = 0

for i in range(len(s)):
  ans += int(s)
  s = s[1:]+s[0]
print(ans)