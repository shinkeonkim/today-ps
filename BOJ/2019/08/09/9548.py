import sys
for t in range(int(input())):
    a=sys.stdin.readline()
    LL =[]
    while True:
        s = sys.stdin.readline()
        if s == 'END\n':
            break
        LL.append(s[:-1])
        #print(LL)
        
    for s in LL:
        L=s.split()
        L[2]=int(L[2])

        if L[0] == 'I':
            a = a[:L[2]]+L[1]+a[L[2]:]
        elif L[0] == 'P':
            L[1]=int(L[1])
            sys.stdout.write(a[L[1]:L[2]+1]+"\n")