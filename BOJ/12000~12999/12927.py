s = input()
n = len(s)
D = [True for i in range(n+1)]
for i in range(n):
    if s[i] == 'N':
        D[i+1] = False
ans = 0
for i in range(1,n+1):
    if D[i]:
        ans += 1
        for j in range(i,n+1,i):
            D[j] = not D[j]
print(ans)
        
