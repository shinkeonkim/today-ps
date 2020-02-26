a,s=input().split()
if a == 'E':
    current = s[0]
    cnt = 1
    for i in range(1,len(s)):
        if s[i] != current:
            print(current+str(cnt),end="")
            current =   s[i]
            cnt=1
        else:
            cnt+=1
    print(current+str(cnt))

elif a == 'D':
    for i in range(0,len(s),2):
        print(end=s[i]*int(s[i+1]))
    print()