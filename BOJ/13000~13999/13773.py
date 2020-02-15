while True:
    a = int(input())
    if a == 0:
        break
    print(a,end=" ")
    if a < 1896:
        print("No summer games")
    elif a in (1916,1940,1944):
        print("Games cancelled")
    elif a > 2020 and a%4 == 0:
        print("No city yet chosen")
    elif a % 4 == 0:
        print("Summer Olympics")
    else:
        print("No summer games")