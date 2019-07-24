a=list(map(int,list(input())))
c=0
while len(a) >1:
    c+=1
    k=1
    for i in a:
        k*=i
    a=list(map(int,list(str(k))))
print(c)