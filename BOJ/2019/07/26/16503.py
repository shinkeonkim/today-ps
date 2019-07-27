def f(a,b,c):
    if c == '+':
        return a+b
    if c == '-':
        return a-b
    if c == '*':
        return a*b
    if c == '/':
        if a*b <0:
            return abs(a)//abs(b) * (-1) 
        return abs(a)//abs(b)
L=input().split()
for i in range(len(L)):
    if i % 2 == 0:
        L[i]=int(L[i])

M1 = f(f(L[0],L[2],L[1]),L[4],L[3])
M2 = f(L[0],f(L[2],L[4],L[3]),L[1])

print(min(M1,M2))
print(max(M1,M2))