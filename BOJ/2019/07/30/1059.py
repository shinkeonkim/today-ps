n=int(input())
L=list(map(int,input().split()))
k=int(input())
L.sort()

if n == 1:
    if L[0]-2 >0:
        print(L[0]-2)
    else:
        print(0)

for i in range(len(L)-1):
    if L[i] <= k <=L[i+1]:
        if L[i+1]-L[i]-2 <0:
            print(0)
        else: 
            print(L[i+1]-L[i]-2)
        break
else:
    print(0)