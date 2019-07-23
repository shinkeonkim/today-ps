n=int(input())
L= sorted(list(map(int,input().split())))
for i in range(n-1):
    if L[i] == L[i+1]:
        print(L[i])
        break