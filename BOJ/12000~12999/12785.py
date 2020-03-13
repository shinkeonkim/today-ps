from math import factorial as f
Mod = 1000007
w,h = map(int,input().split())
x,y = map(int,input().split())
k = (f(x+y-2) // (f(x-1)*f(y-1)))% Mod
k2 = (f((w-x)+(h-y)) // (f(w-x)*f(h-y))) % Mod
print((k*k2)%Mod)