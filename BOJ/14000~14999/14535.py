S = "JanFebMarAprMayJunJulAugSepOctNovDec"
T = 0
while True:
    T+=1
    a=int(input())
    L = [0]*13
    if a == 0:
        break
    for i in range(a):
        L[list(map(int,input().split()))[1]]+=1
    print("Case #{}:".format(T))
    for i in range(12):
        print("{}:{}".format(S[3*i:3*i+3],"*"*L[i+1]))

        