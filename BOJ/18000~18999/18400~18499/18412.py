n,a,b = map(int,input().split())
s = input()
for i in range(a-1): print(end=s[i])
for i in range(b-1,a-2,-1): print(end=s[i])
for i in range(b,n): print(end=s[i])