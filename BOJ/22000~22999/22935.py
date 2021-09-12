for i in range(int(input())):
  a = (int(input()) - 1) % 28
  a = bin((28 - a if a > 14 else a) + 1)[2:]
  print(('0'*(4-len(a))+a).replace('1', '딸기').replace('0','V'))
