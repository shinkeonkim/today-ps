n=int(input())
L=list(map(int,input().split()))
a=int(input())
L=[0]+L
L.sort()
for i in range(len(L)-1):
    if L[i] < a < L[i+1]:
        print((L[i+1]-a-1)*(a-L[i]-1) + (L[i+1]-a-1)+(a-L[i]-1))
        break
    elif L[i] == a:
        print(0)
        break