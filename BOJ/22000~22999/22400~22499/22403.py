c = 0
chk = 1
for _ in ' '*int(input()):
  if input() == 'A':
    c += 1
  else:
    if c > 0:
      c -=1
    else:
      chk = 0
print("YES" if chk and c == 0 else "NO")