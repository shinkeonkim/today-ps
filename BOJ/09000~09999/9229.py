while True:
    a = input()

    if a == '#':
        break

    L = []
    while a != '#':
        L.append(a)
        a = input()
    
    chk = True
    for i in range(1,len(L)):
        if len(L[i-1]) != len(L[i]):
            chk = False
            break
        
        cnt = 0
        for j in range(len(L[i-1])):
            if L[i][j] != L[i-1][j]:
                cnt+=1
        if cnt!= 1:
            chk = False
            break
    
    if chk:
        print("Correct")
    else:
        print("Incorrect")