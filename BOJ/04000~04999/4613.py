while True:
    a=input()
    if a == '#':
        break
    S=0
    for i in range(len(a)):
        if ord('A') <= ord(a[i]) <= ord('Z'):
            S+=(i+1)*(ord(a[i])-ord('A')+1)
    print(S)
