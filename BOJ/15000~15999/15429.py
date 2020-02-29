for t in range(int(input())):
    L = list(map(int,input().split()))[1:]
    L = [L[0]-1] + L + [L[-1]+1]
    c = []
    for i in range(1,len(L)-1):
        if L[i] - L[i-1] == L[i+1]-L[i] == 1:
            continue
        c.append(i)
    print(c[1])