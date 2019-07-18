for i in range(int(input())):
    a=sorted(list(map(int,input().split())))
    print("Case #{}: ".format(i+1),end="")
    if a[2]**2 == a[0]**2 + a[1]**2:
        print("YES")
    else:
        print("NO")