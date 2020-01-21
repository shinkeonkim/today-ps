s = list(map(int,input().split(":")))
e = list(map(int,input().split(":")))

S = s[0]*60*60+s[1]*60+s[2]
E = e[0]*60*60+e[1]*60+e[2]

T = (E-S + 24*60*60) % (24*60*60)
if T == 0:
    T = 24*60*60
print("%02d:%02d:%02d" % (T//3600,(T%3600)//60,T%60))