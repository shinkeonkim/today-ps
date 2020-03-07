import numpy as np
n = int(input())
L = [list(map(int,input().split())) for i in range(n)]
A = [[i[0],1] for i in L]
B = [i[1] for i in L]
A = np.array(A)
B = np.array(B)
A_t = A.T
k = A_t.dot(A)
z = A_t.dot(B)
x = np.linalg.solve(k,z)
for i in x:
    print(int(i+0.5),end = " ")