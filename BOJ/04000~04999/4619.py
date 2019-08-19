while True:
    B,N=map(int,input().split())
    if B == 0 and N == 0:
        break
    diff = 99999999
    A = B+diff
    for i in range(0,int(B**(1/N))+2):
        if abs(B - i**N) <= diff:
            diff = abs(B - i**N)
            A = i
    print(A)