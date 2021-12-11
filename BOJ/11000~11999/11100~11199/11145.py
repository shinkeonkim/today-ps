for _ in range(int(input())):
    try:
        a = input().strip()
        if int(a) >= 0 and "+" not in a:
            print(int(a))
        else:
            raise ValueError
    except:
        print("invalid input")
