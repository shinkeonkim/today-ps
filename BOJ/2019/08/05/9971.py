while True:
    a=input()
    if a != "START":
        break
    b=input()
    c=input()

    for i in b:
        if ord('A') <= ord(i) <=ord('Z'):
            print(chr((ord(i)-ord('A')+21)%26+ord('A')),end="")
        else:
            print(i,end="")
    print()