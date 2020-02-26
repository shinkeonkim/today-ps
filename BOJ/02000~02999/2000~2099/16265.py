for t in range(int(input())):
    n = int(input())
    L = []
    while n >0:
        L.append(n%26)
        if n%26 == 0:
            n//=26
            n-=1
        else:
            n//=26
    for i in L[::-1]:
        if i == 0:
            print(end="Z")
        else:
            print(end=chr(i+64))
    print()