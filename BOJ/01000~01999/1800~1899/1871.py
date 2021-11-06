for _ in range(int(input())):
  a,b = input().split('-')
  aa = 0
  for i in range(len(a)):
    aa *= 26
    aa += ord(a[i]) - ord('A')
  print("nice" if abs(aa - int(b)) <= 100 else "not nice")