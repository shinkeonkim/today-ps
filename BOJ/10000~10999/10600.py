L = [["White",255,255,255],["Silver",192,192,192],["Gray",128,128,128],["Black",0,0,0],\
    ["Red",255,0,0],["Maroon",128,0,0],["Yellow",255,255,0],["Olive",128,128,0],["Lime",0,255,0],\
    ["Green",0,128,0],["Aqua",0,255,255],["Teal",0,128,128],["Blue",0,0,255],\
    ["Navy",0,0,128],["Fuchsia",255,0,255],["Purple",128,0,128]]
while True:
    a,b,c = map(int,input().split())
    if a == b == c == -1:
        break
    Mx = 9999999999
    ans = ""
    for i in L:
        if Mx > (i[1]-a)**2 + (i[2]-b)**2 + (i[3]-c)**2:
            Mx = (i[1]-a)**2 + (i[2]-b)**2 + (i[3]-c)**2
            ans = i[0]
    print(ans)