n = int(input())
L = list(map(int,input().split()))
s = list(input())
r = []
for i in L:
    if i ==0:
        r.append(" ")
    elif 1<=i<=26:
        r.append(chr(ord('A')+i-1))
    elif 27<=i<=52:
        r.append(chr(ord('a')-27+i))
s.sort()
r.sort()
if s==r:
    print("y")
else:
    print("n")