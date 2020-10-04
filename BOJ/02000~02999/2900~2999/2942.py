def f(a,b):
    return f(b,a%b) if b else a
a,b=map(int,input().split())
g = f(a,b)
for i in range(1, int(g ** (1/2)+1)):
    if g % i == 0:
        print(i, a//i, b//i)
        if i != g//i:
            print(g//i, a//(g//i), b//(g//i))
