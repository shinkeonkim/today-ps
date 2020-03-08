def f(a,b):
    if len(a) != len(b):
        return False
    if a == b:
        return True
    for i in range(1,len(a)):
        if a[i:] + a[:i] == b:
            return True
    return False

n = int(input())
L = [input() for i in range(n)]
check = [True] * n
ans = 0
for i in range(n):
    if check[i]:
        ans+=1
        for j in range(i+1,n):
            if f(L[i],L[j]):
                check[j] = False
print(ans)