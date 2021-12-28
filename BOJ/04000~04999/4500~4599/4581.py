while 1:
  s = input()
  if s == '#':
    break
  
  n = len(s)
  a = s.count('A')
  
  if a*2 >= n:
    print("need quorum")
  else:
    y = s.count('Y')
    n = s.count('N')
    print("yes" if y > n else ("no" if y < n else "tie"))
