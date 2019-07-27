def f(a,b):
    return f(b,a%b) if b else a
a=input()
b=input()
A=len(a)
B=len(b)

a = a*(B//f(A,B))
b = b*(A//f(A,B))

if a==b:
    print(1)
else:
    print(0)