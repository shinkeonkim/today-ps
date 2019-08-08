T=int(input())
for t in range(1,T+1):
    n=int(input())
    a=input()
    b=input()
    s=0
    for i in range(n):
        if a[i] != b[i]:
            s+=1
    print("Case {}: {}".format(t,s))