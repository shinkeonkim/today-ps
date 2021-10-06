x,y,z=map(int,input().split())
a,b,c=map(int,input().split())

if a >= x and b >= y and c >=z:
  print("A")
elif a*2 >= x and b >= y and c >= z:
  print("B")
elif b >= y and c >= z:
  print("C")
elif b*2 >= y and c >= z:
  print("D")
else:
  print("E")
