for i in range(int(input())):
  s = input()
  if len(s) == 8 and s[0] == s[1] and not ({*s[:4]+s[-3:]} - {*"123456789"}) and 'A' <= s[4] <= 'Z':
      print(s)
  