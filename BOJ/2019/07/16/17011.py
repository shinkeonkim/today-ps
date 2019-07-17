for i in range(int(input())):
    a=input()
    if len(a) ==1:
        print(1,a[0])
        continue
    c = a[0]
    cnt = 1
    for i in range(1, len(a)):
        if a[i] == a[i-1]:
            cnt+=1
        else:
            print(cnt,c,end=" ")
            c = a[i]
            cnt = 1
    print(cnt,c)