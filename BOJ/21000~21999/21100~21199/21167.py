while True:
  try:
    r,s=map(float,input().split())
  except:
    break
  print(round(((r*(s+0.16))/0.067)**(1/2)))
