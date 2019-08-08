for i in range(int(input())):
    N,D,A,B,F=list(map(float,input().split()))
    N=int(N)
    print(N,(D/(A+B))*F) 