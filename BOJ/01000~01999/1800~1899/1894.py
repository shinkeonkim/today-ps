while True:
    try:
        a=input()
    except:
        break
    a = a.split()
    L = []
    for i in range(0,len(a),2):
        L.append([a[i],a[i+1]])
    if L[0] == L[2]:
        L[0],L[1] = L[1],L[0]
    if L[0] == L[3]:
        L[0],L[1] = L[1],L[0]
        L[2],L[3] = L[3],L[2]
    if L[1] == L[3]:
        L[2],L[3] = L[3],L[2]
    
    print("%.3f %.3f" %(float(L[3][0]) - (float(L[1][0])-float(L[0][0])), float(L[0][1]) + (float(L[3][1]) -float(L[2][1]))))