for t in range(int(input())):
    n=int(input())
    k = 3 + 5**(1/2)
    s = str(int(k**n))
    if len(s) <3:
        s = "0"*(3-len(s)) +s
    print("Case #{}: {}".format(t+1,s[-3:]))