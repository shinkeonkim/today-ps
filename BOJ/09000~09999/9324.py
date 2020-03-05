for _ in range(int(input())):
    d = {}
    s = input()
    i = 0
    while i < len(s):
        try:
            d[s[i]] +=1
        except:
            d[s[i]] = 1
    
        if d[s[i]] == 3:
            if i+1 <len(s) and s[i+1] == s[i]:
                d[s[i]] = 0
                i+=1
            else:
                print("FAKE")
                break
        i+=1
    else:
        print("OK")