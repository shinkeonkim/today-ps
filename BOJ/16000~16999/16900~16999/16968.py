s = input()
L = []
z = s[0]
for i in s[1:]:
    if z[-1] == i:
        z += i
    else:
        L.append(z)
        z = i
L.append(z)

ans = 1
for i in L:
    c = 1
    if i[0] == 'c':
        c*=26
        for j in range(1,len(i)):
            c*=25
    else:
        c*=10
        for j in range(1,len(i)):
            c*=9
    ans*=c
print(ans)