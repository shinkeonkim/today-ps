n = 0
check = [0]*11
ret = []
def g():
    global n,check,ret
    s = "1"
    c = "1"
    cnt = 0
    for i in range(1,n):
        if check[i] == 0:
            s += "+"
            c += "+"
            cnt +=1
        elif check[i] == 1:
            s += "-"
            c += "-"
            cnt +=1
        else:
            c +=" "
        s += str(i+1)
        c += str(i+1)

    if eval(s) == 0:
        ret.append(c)

def f(k):
    global n
    if(n-1 == k):
        for i in range(3):
            check[k] = i
            g()
    else:
        for i in range(3):
            check[k] = i
            f(k+1)

for i in range(int(input())):
    n = int(input())
    M = 0
    ret = []
    f(1)
    ret.sort()
    for i in ret:
        print(i)
    print()
    