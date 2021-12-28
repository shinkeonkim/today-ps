while 1:
  s = input()
  if s == '#':
    break
  
  c = 0
  for i in s:
    if i in 'aeiou':
      break
    c+=1
  else:
    print(s+"ay")
    continue
  
  if c == 0:
    print(s+"ay")
    continue
  
  print(s[c:]+s[:c]+"ay")
