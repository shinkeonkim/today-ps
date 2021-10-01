x = -8140
y = -8140
x_diff = 8140//20
y_diff = 8140//20

for i in range(814):
  print(x, y)
  x += x_diff
  if x > 8140:
    x = -8140 + (x_diff) * ((i % 2) / 2)
    y += y_diff
