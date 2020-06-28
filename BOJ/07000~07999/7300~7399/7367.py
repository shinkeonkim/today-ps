while True:
    a = int(input())
    if a == 0:
        break

    L = input().split()
    for b in range(2,11):
        try:
            L2 = [int(i,b) for i in L]
        except:
            continue
        else:
            k = L2[1]-L2[0]
            for j in range(2,len(L2)):
                if k != L2[j] - L2[j-1]:
                    break
            else:
                print("Minimum base = {}.".format(b))
                break
    else:
        print("No base <= 10 can be found.")