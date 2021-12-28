s = input()
chk = True
for i in range(len(s)):
  for j in range(i+1, len(s), 2):
    z = s[i:(j+1)]
    if z == z[::-1]:
      chk=False
print("Odd." if chk else "Or not.")