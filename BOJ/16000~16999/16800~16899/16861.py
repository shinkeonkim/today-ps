n = int(input())
while True:
    s,z =0,n
    while z>0:
        s+=z%10
        z//=10
    if n%s==0:
        print(n)
        break
    n+=1