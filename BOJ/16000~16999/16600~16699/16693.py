from math import pi
A,P1=map(int,input().split())
R,P2=map(int,input().split())
if A*P2 < R*R*pi*P1:
    print("Whole pizza")
else:
    print("Slice of pizza")