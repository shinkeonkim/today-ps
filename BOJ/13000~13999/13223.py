L1=list(map(int,input().split(":")))
L2=list(map(int,input().split(":")))

T1 = L1[0]*3600+L1[1]*60+L1[2]
T2 = L2[0]*3600+L2[1]*60+L2[2]

T = T2-T1

if T<0:
    T+=24*60*60

if T==0:
    print("24:00:00")
else:
    print("%02d:%02d:%02d"%(T//(60*60),(T%(60*60))//60,T%60))
