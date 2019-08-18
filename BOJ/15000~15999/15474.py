N,A,B,C,D=list(map(int,input().split()))
if N%A == 0:
    M = B*(N//A)
else:
    M = B*(N//A+1)
if N%C == 0:
    M2 = D*(N//C)
else:
    M2= D*(N//C+1)
print(min(M,M2))