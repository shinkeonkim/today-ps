for i in range(int(input())):
    s = input()
    prev = s[0]
    cnt = 1
    for i in range(1,len(s)):
        if prev == s[i]:
            cnt+=1
        else:
            print("{}{}".format(cnt,prev),end="")
            prev = s[i]
            cnt =1
    print("{}{}".format(cnt,prev))