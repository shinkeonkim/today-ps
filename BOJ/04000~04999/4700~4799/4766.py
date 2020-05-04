import sys
a=input()
if a=='999':
    sys.exit()
a=float(a)
while True:
    b=input()
    if b=='999':
        break
    b=float(b)
    print("%.2f" %(b-a))
    a=b
