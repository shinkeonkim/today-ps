def f(a):
    ret = 0
    for i in range(1,a):
        if a%i == 0:
            ret += i
    return ret
L = []
while True:
    try:
        L = L + list(map(int,input().split()))
    except:
        break

for i in L:
    if i == 0:
        break
    s = f(i)
    if s == i:
        print(i,"PERFECT")
    elif s > i :
        print(i,"ABUNDANT")
    else:
        print(i,"DEFICIENT")