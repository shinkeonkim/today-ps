f=open("C:/Users/kimshinkeon/Desktop/2015_KOI_Local Contest Program DATA(H)/2.ball/output/output10.txt",'r')
f2=open("C:/Users/kimshinkeon/Desktop/fuck.txt",'r')

print(len(f.read()))
print(len(f2.read()))
while True:
    line1 = f.readline()
    line2 = f2.readline()

    if not line1 or not line2:
        print(-1)
        break
    if line1 != line2:
        print(line1,line2)

