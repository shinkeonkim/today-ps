for t in range(1,int(input())+1):
    a = input()
    a = a.strip()
    a2 = a.lower()
    if a2[-1] == 'y':
        print("Case #{}: {} is ruled by nobody.".format(t,a))
    elif a2[-1] in 'aeiou':
        print("Case #{}: {} is ruled by a queen.".format(t,a))
    else:
        print("Case #{}: {} is ruled by a king.".format(t,a))