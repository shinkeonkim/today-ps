for _ in range(int(input())):
    a,b=input().split()
    k=int(a,2)+int(b,2)
    print(bin(k)[2:])