def f1(L):
    global ll
    s=""
    for i in range(1,ll):
        if i%3 == 0:
            s+="..*."
        else:
            s+="..#."
    if ll%3==0:
        s+="..*.."
    else:
        s+="..#.."
    L.append(s)
def f2(L):
    global ll
    s=""
    for i in range(1,ll):
        if i%3 !=0:
            s+=".#.#"
        else:
            s+=".*.*"
    if ll%3!=0:
        s+=".#.#."
    else:
        s+=".*.*."
    L.append(s)

def f3(L):
    global ll
    global a
    s=""
    for i in range(1,ll):
        if i%3 != 0 and not (i!=1 and i%3 == 1):
            s+="#.{}.".format(a[i-1])
        else:
            s+="*.{}.".format(a[i-1])
    if ll%3!=0 and (ll!=1 and ll%3 == 1):
        s+="*.{}.#".format(a[ll-1])
    elif ll%3!=0:
        s+="#.{}.#".format(a[ll-1])
    else:
        s+="*.{}.*".format(a[ll-1])
    L.append(s)


L=[]
a=input()
ll=len(a)
f1(L)
f2(L)
f3(L)
f2(L)
f1(L)
for i in range(5):
    print(L[i])