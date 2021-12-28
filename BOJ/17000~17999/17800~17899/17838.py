for t in range(int(input())):
  s = input()
  print(1 if len(s) == 7 and len({*s}) == 2 and s[0] == s[1] == s[4] and s[2] == s[3] == s[5] == s[6] else 0)