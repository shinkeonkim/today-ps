import sys
h,m,s=map(int,sys.stdin.readline().split())
time = h*60*60 + m*60 + s
Mod = 60*60*24
for i in range(int(sys.stdin.readline())):
    L = list(map(int,sys.stdin.readline().split()))
    if L[0] == 1:
        time = (time + L[1]) %Mod
    elif L[0] == 2:
        time = (time - L[1]) %Mod
    else:
        if time<0:
            time += Mod
        print(time // 3600,(time % 3600) // 60, time % 60)