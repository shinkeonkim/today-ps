limit = int(input())
speed = int(input())
over = speed - limit

if over > 0:
  print('You are speeding and your fine is ${money}.'.format(money=500 if over >= 31 else (270 if over >= 21 else 100)))
else:
  print('Congratulations, you are within the speed limit!')
