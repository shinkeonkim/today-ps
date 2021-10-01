s = input()
for start_len in range(1, len(s)+1):
  s2 = s[:start_len]
  n = int(s2)

  while len(s2) < len(s):
    n += 1
    s2 += str(n)
  
  if s2 == s:
    print(s[:start_len], n)
    break
