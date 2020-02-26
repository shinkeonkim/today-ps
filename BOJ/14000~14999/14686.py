n =int(input())
a = [0]+list(map(int,input().split()))
b = [0]+list(map(int,input().split()))
ans = 0
A,B=0,0
for i in range(n+1):
    A+=a[i]
    B+=b[i]
    if A==B:
        ans = i
print(ans)
