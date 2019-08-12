import sys
L=[]
for i in range(36):
    L.append(input())
    if not ord('A') <= ord(L[i][0]) <= ord('F'):
        print("Invalid")
        sys.exit()
    if not 1 <= int(L[i][1]) <= 6:
        print("Invalid")
        sys.exit()
S=set(L)
if len(S) != 36:
    print("Invalid")
    sys.exit()

for i in range(1,36):

    if (abs(ord(L[i-1][0])-ord(L[i][0])) ==1 and abs(int(L[i-1][1])-int(L[i][1])) ==2)  or (abs(ord(L[i-1][0])-ord(L[i][0])) ==2 and abs(int(L[i-1][1])-int(L[i][1])) ==1):
        continue
    print("Invalid")
    break
else:
    if (abs(ord(L[35][0])-ord(L[0][0])) ==1 and abs(int(L[35][1])-int(L[0][1])) ==2)  or (abs(ord(L[35][0])-ord(L[0][0])) ==2 and abs(int(L[35][1])-int(L[0][1])) ==1):
        print("Valid")
    else:
        print("Invalid")
    