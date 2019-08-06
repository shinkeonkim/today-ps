for t in range(int(input())):
    a=int(input())
    s=input()
    L=[]
    for i in range(0,a*8,8):
        b=s[i:i+8]
        k=0
        for i in range(8):
            if b[i] == 'I':
                k += 2**(7-i)
        L.append(k)
    print("Case #"+str(t+1),end=": ")
    for i in L:
        print(chr(i),end="")
    print()