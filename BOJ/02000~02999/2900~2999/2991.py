A,B,C,D = map(int,input().split())
I = list(map(int,input().split()))

L = [0]*3300

for i in range(0,1100,A+B):
    for j in range(A):
        L[i+j]+=1
for i in range(0,1100,C+D):
    for j in range(C):
        L[i+j]+=1
for i in I:
    print(L[i-1])
