for i in range(int(input())):
    a = input()
    if "lol" in a:
        print(0)
        continue

    if "lo" in a or "ol" in a or "ll" in a:
        print(1)
        continue

    chk = False
    for i in range(len(a)-2):
        if a[i] == 'l' and a[i+2] =='l':
            chk = True
            print(1)
            break
    if chk:
        continue

    if "l" in a or "o" in a:
        print(2)
        continue

    print(3)