Mod = 1000000007
def f(a,x):
    if x<1:
        return 1
    elif x == 1:
        return a%Mod
    else:
        b=f(a,x//2)
        if x%2 == 1:
            return (b*b*a)%Mod
        else:
            return (b*b)%Mod
A=int(input())
X=int(input())
print(f(A,X))