def replace_all(s, t, f):
  for i in s:
    print(t if i in f else i, end="")

s = input()
if 'A' in s:
  replace_all(s, 'A', 'BCDF')
elif 'B' in s:
  replace_all(s, 'B', 'CDF')
elif 'C' in s:
  replace_all(s, 'C', 'DF')
else:
  print("A"*len(s))
