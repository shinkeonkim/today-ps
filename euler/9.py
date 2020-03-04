for c in range(333,501):
    for a in range(1,c):
        b = 1000-a-c
        if a*a + b*b == c*c and a<b<c:
            print(a*b*c)