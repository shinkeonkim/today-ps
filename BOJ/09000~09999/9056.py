for i in range(int(input())):
    a,b = input().split()
    print("NO" if len({*a} - {*b}) or len({*b} - {*a}) else "YES")
