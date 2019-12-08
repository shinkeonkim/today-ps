for i in range(int(input())):
    n = int(input())
    print((  (n*(n+1))**2 + (2*n*(n+1)*(2*n+1)))//8  + (n*(n+1))//2)