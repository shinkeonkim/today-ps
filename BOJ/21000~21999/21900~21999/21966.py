N = int(input())
s = input()

if len(s) <= 25:
  print(s)
elif '.' in s[11:-12]:
  print(s[:9]+'.'*6+s[-10:])
else:
  print(s[:11]+'.'*3+s[-11:])
