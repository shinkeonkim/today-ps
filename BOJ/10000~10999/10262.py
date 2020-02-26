a1,a2,a3,a4 = map(int,input().split())
b1,b2,b3,b4 = map(int,input().split())
d1 = [0] *201
d2 = [0] *201

for i in range(a1,a2+1):
    for j in range(a3,a4+1):
        d1[i+j] +=1

for i in range(b1,b2+1):
    for j in range(b3,b4+1):
        d2[i+j] +=1

cnt1,cnt2 = 0,0
for i in range(1,201):
    for j in range(1,201):
        if i < j:
            cnt2 += d1[i] * d2[j]
        elif i > j:
            cnt1 += d1[i] * d2[j]

if cnt1 > cnt2:
    print("Gunnar")
elif cnt1 < cnt2:
    print("Emma")
else:
    print("Tie")