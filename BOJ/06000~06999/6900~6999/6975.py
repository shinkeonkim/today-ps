from math import sqrt
for _ in range(int(input())):
    k = int(input())
    s = 1
    for i in range(2,int(sqrt(k))+1):
        if k%i == 0:
            s+=i
            if i != k//i:
                s+=k//i
    if s == k:
        print("{} is a perfect number.".format(k))
    elif s>k:
        print("{} is an abundant number.".format(k))
    else:
        print("{} is a deficient number.".format(k))
    print()