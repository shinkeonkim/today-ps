for t in range(int(input())):
    s = input()
    S = 0
    for i in s:
        if i !=" ":
            S += ord(i) - 64
    if S == 100:
        print("PERFECT LIFE")
    else:
        print(S)