while True:
    a = int(input())
    if a == 0:
        break
    print("{} => {}".format(a,a*(a-1)+1))