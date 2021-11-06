D = [0, 1, 1]
for i in range(500):
  D.append(D[-1]+D[-2])
while 1:
  n = int(input())
  if n == -1:
    break
  print(f"Hour {n}: {D[n]} cow(s) affected")
