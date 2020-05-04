A = "aeiou"
while True:
    a = input()
    if a == 'end':
        break
    check = True
    for i in a:
        if i in A:
            break
    else:
        check = False
    
    L = [0 if i in A else 1 for i in a  ]

    for i in range(0,len(L)-2,1):
        if L[i] == L[i+1] == L[i+2]:
            check = False
            break
    
    for i in range(0,len(L)-1,1):
        if a[i] == a[i+1] and a[i] not in "eo":
            check = False
            break
    
    if check:
        print("<{}> is acceptable.".format(a))
    else:
        print("<{}> is not acceptable.".format(a))