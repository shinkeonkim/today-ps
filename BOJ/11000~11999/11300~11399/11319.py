for _ in range(int(input())):
    a="".join(input().split()).lower()
    L=['a','e','i','o','u']
    c=0
    for i in L:
        c+=a.count(i)
    print(len(a)-c,c)