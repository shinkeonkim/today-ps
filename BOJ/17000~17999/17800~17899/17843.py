for _ in range(int(input())):
  h,m,s = map(int,input().split())
  ss = s * 6
  mm = m * 6 + s/10
  hh = h * 30 + m/2 + s/120
  l = sorted([ss,mm,hh])
  print(min([l[1]-l[0], l[2]-l[1], (l[0]-l[2]+360)%360]))
