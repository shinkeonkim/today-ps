a,b=list(map(int,input().split()))
c,d=list(map(int,input().split()))
k=int(input())
D = abs(a-c)+abs(b-d)

if D>k:
    print("N")
else:
    if (k-D)%2==0:
        print("Y")
    else:
        print("N")