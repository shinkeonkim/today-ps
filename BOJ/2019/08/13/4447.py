cnt = int(input())
for i in range(cnt):
    s=input()
    a=s.lower()
    g=a.count('g')
    b=a.count('b')
    print(s,"is",end=" ")
    if g == b:
        print("NEUTRAL")
    elif g>b:
        print("GOOD")
    else:
        print("A BADDY")