result = []
A = 0
B = 0

a = 0
b = 0

s=input()

for i in s:
    if i == 'A':
        a += 1
    if i == 'B':
        b += 1
    
    if a == 21:
        A+=1
        result.append([a,b])
        a = b = 0
    if b == 21:
        B+=1
        result.append([a,b])
        a = b = 0
    
    if A >= 2 or B >= 2:
        break

for i in result:
    print("{}-{}".format(i[0],i[1]))
if A == 2:
    print("A")
else:
    print("B")