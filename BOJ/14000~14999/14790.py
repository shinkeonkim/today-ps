def f(n):
    L = []
    while n > 0:
        L.append(n%10)
        n//=10
    for i in range(1,len(L)):
        if L[i-1] < L[i]:
            return False
    return True

N = int(input())
for i in range(N):
    A = int(input())
    ans = 1
    for j in range(1,A+1):
        if f(j):
            ans = j
    print("Case #{}: {}".format(i+1,ans))