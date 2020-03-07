for i in range(int(input())):
    a,b = input().split()
    a = int(a)
    if a == 1:
        L = list(map(int,b.split(".")))
        s = ""
        for i in L:
            k = bin(i)[2:]
            k = "0"*max(0,8-len(k))+k
            s+=k
        print(int(s,base = 2))
    else:
        b = bin(int(b))[2:]
        b = "0"*max(0,64-len(b))+b
        for i in range(0,64,8):
            print(int(b[i:i+8],base = 2),end = "")
            if i !=56:
                print(end=".")
        print()