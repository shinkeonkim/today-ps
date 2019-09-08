import sys

def f(x1,y1,x2,y2):
    if x1 == x2 or y1 == y2 or abs(x1-x2) == abs(y1-y2):
        return True
    return False

L = []
Queen = []
for i in range(8):
    L.append(input())

for y in range(8):
    for x in range(8):
        if L[y][x] == '*':
            Queen.append([y,x])

if len(Queen) !=8:
    print("invalid")
    sys.exit()

for i in range(len(Queen)):
    for j in range(i+1,len(Queen)):
        if f(Queen[i][0],Queen[i][1],Queen[j][0],Queen[j][1]):
            print("invalid")
            sys.exit()

print("valid")