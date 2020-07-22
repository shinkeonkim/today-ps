L = [[0] * 14 for i in range(4)]
D = {'P':0,'K':1,'H':2,'T':3}
check = True
a=input()
for i in range(0,len(a),3):
    if L[D[a[i]]][int(a[i+1]+a[i+2])] > 0:
        check = False
    else:
        L[D[a[i]]][int(a[i+1]+a[i+2])]+=1

if check:
    for i in range(4):
        print(L[i].count(0)-1,end=" ")
else:
    print("GRESKA")