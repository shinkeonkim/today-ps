T = 1
while True:
    a = int(input())
    if a == 0:
        break
    L = []
    for i in range(a):
        L.append(list(map(int,input().split())))
    S = 0
    for i in range(a):
        if i == 0:
            S+=L[i][0]
        elif i == a-1:
            S+=sum(L[i])
        else:
            S+=L[i][0] + L[i][-1]
    print("Case #{}:{}".format(T,S))
    T+=1