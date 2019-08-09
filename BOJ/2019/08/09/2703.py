for _ in range(int(input())):
    a=input()
    r=input()
    for i in a:
        if ord('A') <= ord(i) <= ord('Z'):
            print(r[ord(i)-ord('A')],end="")
        else:
            print(i,end="")
    print()