from math import pi

def f(a,b):
    global D,Mod
    if D[a][b]>= 0:
        return D[a][b]
    else:
        if a - b*pi < 0:
            D[a][b] = 0
            return 0
        elif 0 <= a - b*pi  <= pi:
            D[a][b] = 1
            return 1
        else:
            D[a][b] = (f(a-1,b) + f(a,b+1))%Mod
            return D[a][b]

D = [[-1]*1100 for i in range(1100)]
Mod = 1000000000000000000
print(f(int(input()),0))
