while True:
    a=input()
    if a == '#':
        break
    k=a[-1]
    a=a[:-1]
    c = a.count('1')
    z = ""
    if k == 'e':
        if c%2==0:
            z='0'
        if c%2==1:
            z='1'
    if k == 'o':
        if c%2==0:
            z='1'

        if c%2==1:
            z='0'
    print(a+z)