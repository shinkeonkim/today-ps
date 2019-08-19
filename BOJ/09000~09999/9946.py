cnt = 1
while True:
    a=input()
    b=input()
    if a=="END" and b == "END":
        break
    a=list(a)
    a.sort()
    a=str(a)
    b=list(b)
    b.sort()
    b=str(b)
    if a==b:
        print("Case {}: same".format(cnt))
    else:
        print("Case {}: different".format(cnt))
    
    cnt+=1