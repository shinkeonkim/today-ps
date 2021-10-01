while True:
  s = input()
  
  if s == '#':
    break

  for i in range(len(s)):
    k = s[:(i)] + s[(i+1):]
    if k == k[::-1]:
      print(k)
      break
  else:
    print('not possible')
