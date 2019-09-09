a=input()
L = []
i = 0
while i < len(a):
    l = []
    l.append(a[i])
    i+=1
    while i <len(a) and ord('a') <= ord(a[i]) <= ord('z'):
        l.append(a[i])
        i+=1
    L.append(l)

ans = 0
for i in L[:-1]:
    if len(i)%4 != 0:
       ans += 4 - len(i)%4

print(ans)