for t in range(int(input())):
    a,b = input().split()
    cnt1,cnt2 = 0,0
    for i in range(len(a)):
        if a[i] != b[i]:
            if b[i] == '0':
                cnt1+=1
            else:
                cnt2+=1

    print(max(cnt1,cnt2))