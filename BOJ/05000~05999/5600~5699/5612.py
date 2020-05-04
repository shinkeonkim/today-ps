M=0
n=int(input())
current = int(input())
for i in range(n):
    a,b=list(map(int,input().split()))
    current +=a
    current -=b
    if current < 0:
        print(0)
        break
    else:
        M=max(M,current)
else:
    print(M)