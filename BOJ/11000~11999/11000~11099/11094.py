for i in range(int(input())):
    s = input()
    if len(s) >=10:
        if s[:10] == "Simon says":
            print(s[10:])