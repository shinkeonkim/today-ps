n=int(input())
L=list(map(int,input().split()))
L.sort()
if L[0] !=1:
    print(1)
else:
    k = L[0]
    for i in range(1,len(L)):
        if L[i] > k+1:
            print(k+1)
            break
        else:
            k += L[i]
    else:
        print(k+1)