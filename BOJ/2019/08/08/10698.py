for i in range(1,int(input())+1):
    s=input()
    print("Case",i,end=": ")
    s=s.split()
    s[0],s[2],s[4]=int(s[0]),int(s[2]),int(s[4])
    if (s[1]=='+' and s[0]+s[2] == s[4]) or (s[1]=='-' and s[0]-s[2]==s[4]):
        print("YES")
    else:
        print("NO")
