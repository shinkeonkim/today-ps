for _ in range(int(input())):
    s = input().split()
    for i in s:
        if len(i) == 4:
            print("*"*4, end = " ")
        else:
            print(i, end = " ")
    print("\n")