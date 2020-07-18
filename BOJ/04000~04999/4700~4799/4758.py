
L = [[4.5, 150, 200, "Wide Receiver"], [6.0,300,500, "Lineman"], [5.0,200,300, "Quarterback"]]

while True:
    a,b,c = list(map(float,input().split()))
    if a+b+c <=0:
        break

    ans = ""
    for i in range(3):
        if a <= L[i][0] and b >=L[i][1] and c >= L[i][2]:
            if len(ans) == 0:
                ans += L[i][3]
            else:
                ans += " " + L[i][3]
    print("No positions" if len(ans) == 0 else ans)
                

