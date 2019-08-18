while True:
    a=input()
    if a=='#':
        break
    a=a.lower()
    s=a[2:]
    a=a[0]
    print(a,s.count(a))