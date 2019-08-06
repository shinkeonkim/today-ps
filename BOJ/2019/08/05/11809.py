def f(a):
    S=0
    if a.count(-1) == len(a):
        print("YODA")
    else:
        for i in range(len(a)):
            if a[i] != -1:
                S*=10
                S+=a[i]
        print(S)

a=list(map(int,list(input())))
b=list(map(int,list(input())))
a.reverse()
b.reverse()
if len(a) < len(b):
    a.extend([-1]*(len(b)-len(a)))
if len(b) < len(a):
    b.extend([-1]*(len(a)-len(b)))

for i in range(len(a)):
    if a[i] < b[i]:
        a[i] = -1
    elif b[i] <a[i]:
        b[i] =-1
a.reverse()
b.reverse()
f(a)
f(b)