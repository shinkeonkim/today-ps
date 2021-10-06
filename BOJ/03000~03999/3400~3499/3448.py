n = int(input())
k = 0
s = 0
cnt = 0
KK = 100000000
while(k<n):
  ss = input()
  if ss=="":
    z = round((s-cnt)*100/s, 1)
    if z * 100 // 1 == (z // 1) * 100:
        print("Efficiency ratio is %d%%." % z)
    else:    
        print("Efficiency ratio is %.1f%%." % z)
    k+=1
    cnt = 0
    s = 0
    continue
  else:
      cnt+=ss.count("#")
      s+=len(ss)