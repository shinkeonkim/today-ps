from sys import stdin
for i in range(int(stdin.readline())):
    n = stdin.readline()
    L = list(map(int,stdin.readline().split()))
    k = min(L)
    odd,even = 0,0
    for i in range(len(L)):
        L[i] -= k
    for i in L:
        if i % 2 == 0:
            even+=1
        else:
            odd+=1
    if odd == len(L) or even == len(L):
        print("YES")
    else:
        print("NO")
    
