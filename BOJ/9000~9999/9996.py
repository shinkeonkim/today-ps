n=int(input())
k=input()
z=k.find('*')
s = k[:z]
e = k[z+1:]

for i in range(n):
    a=input()
    if len(a) >= len(s)+len(e):
        if s == a[:z] and e == a[-len(e):]:
            print("DA")
        else:
            print("NE")
    else:
        print("NE")