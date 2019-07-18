L=[0,0,0,0,0,0,0]
K=["Re","Pt","Cc","Ea","Tb","Cm","Ex"]
S=0
while True:
    try:
        a=input()
    except:
        break
    W=a.split()
    for i in W:
        S+=1
        for num,j in enumerate(K):
            if i == j:
                L[num]+=1
for i in range(7):
    print("%s %d %.2f" %(K[i],L[i],L[i]/S))

print("Total %d 1.00" %(S))
