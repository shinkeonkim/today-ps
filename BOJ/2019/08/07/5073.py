while True:
    L=list(map(int,input().split()))
    if L.count(0) == 3:
        break
    L.sort()
    if L[2] >= L[1]+L[0]:
        print("Invalid")
    elif L[0] == L[1] == L[2]:
        print("Equilateral")
    elif L[0] == L[1] or L[1] == L[2]:
        print("Isosceles")
    else:
        print("Scalene")