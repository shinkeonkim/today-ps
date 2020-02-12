case = 1
while True:
    a = int(input())
    if a == 0:
        break
    L = []
    for i in range(a):
        z = input()
        L.append((z,z.lower()))
    L.sort(key = lambda t : t[1])
    print(case)
    for i in L:
        print(i[0])
    case +=1