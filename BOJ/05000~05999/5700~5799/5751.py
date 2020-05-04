while True:
    a = int(input())
    if a == 0:
        break
    L = list(map(int,input().split()))
    print("Mary won {} times and John won {} times".format(L.count(0),L.count(1)))