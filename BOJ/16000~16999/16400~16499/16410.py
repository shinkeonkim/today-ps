import sys
import math

def f(A,B):
    return (A[0]-B[0])*(A[0]-B[0]) + (A[1]-B[1])*(A[1]-B[1])


L = list(map(int,input().split()))

if L[2] <= L[0] <= L[4] and L[3] <= L[1] <= L[5]:
    answer = min(L[0]-L[2],min(L[4]-L[0],min(L[1]-L[3],L[5]-L[1])))
    print(answer)
    sys.exit()

if L[2] <= L[0] <= L[4]:
    answer = min(abs(L[1]-L[3]),abs(L[5]-L[1]))
    print(answer)
    sys.exit()

if L[3] <= L[1] <= L[5]:
    answer = min(abs(L[0]-L[2]),abs(L[4]-L[0]))
    print(answer)
    sys.exit()

answer = min(f(L[0:2] ,L[2:4]),min(f(L[0:2],L[4:6]),min(f(L[0:2],[L[2],L[5]]),f(L[0:2],[L[3],L[4]]))))

print(math.sqrt(answer))