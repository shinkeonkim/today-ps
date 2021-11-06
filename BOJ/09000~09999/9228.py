while 1:
  s = input()
  if s == '#':
    break
  t = 0
  for i in range(1, len(s)+1):
    t += (i+1) * int(s[-i])
  
  t = 11 - (t % 11)

  print(s, "->", end=" ")

  if t == 10:
    print("Rejected")
  else:
    if t == 11:
      t -= 11
    print(t)

