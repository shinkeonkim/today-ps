N,R,C=list(map(int,input().split()))
if (R+C) %2==0:
    for i in range(N):
        for j in range(N):
            if (i+j) %2 ==0:
                print(end="v")
            else:
                print(end=".")
        print()
else:
    for i in range(N):
        for j in range(N):
            if (i+j) %2 ==0:
                print(end=".")
            else:
                print(end="v")
        print()