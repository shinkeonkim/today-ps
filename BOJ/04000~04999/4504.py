n=int(input())
while True:
    a=int(input())
    if a is 0:
        break
    
    if a%n is 0:
        print("{} is a multiple of {}.".format(a,n))
    else:
        print("{} is NOT a multiple of {}.".format(a,n))