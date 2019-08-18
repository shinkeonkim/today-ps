n=int(input())
s=[]
s2=[]
for i in range(n):
    s.append(input())
for i in range(n-1):
    s2.append(input())
s.sort()
s2.sort()
for i in range(n-1):
    if s[i]!=s2[i]:
        print(s[i])
        break
else:
    print(s[-1])