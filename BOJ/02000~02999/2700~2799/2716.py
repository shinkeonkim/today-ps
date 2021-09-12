for i in range(int(input())):
  s = input()
  cnt = 0
  ans = 0
  for i in range(len(s)):
    if s[i] == '[':
      cnt += 1
    else:
      cnt -= 1
    ans = max(ans, cnt)
  print(2**ans)