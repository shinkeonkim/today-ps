for i in range(int(input())):
    L=list(map(int,input().split()))
    print(abs(L[0]-L[3])+abs(L[1]-L[4])+L[2]+L[5])