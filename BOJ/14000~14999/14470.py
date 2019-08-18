A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())
T = 0
for i in range(A, B):
    if i < 0:
        T += C
    elif i == 0:
        T += D+E
    else:
        T += E
print(T)
