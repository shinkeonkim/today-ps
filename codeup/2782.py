from math import factorial as f
a,b =map(int,input().split())
a-=1
b-=1
print((f(a+b) // (f(a) * f(b))) %1000000000)