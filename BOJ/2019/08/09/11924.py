k = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
while True:
    a = input()
    if a == '#':
        break
    b = int(input())
    c = int(input())
    print("{}, {}, ".format(a,c),end="")
    s = ""
    if c == 0:
        print(0)
        continue
    while c>0:
        s += k[c%b]
        c//=b
    s=list(s)
    s.reverse()
    s="".join(s)
    print(s)