A = list(map(int,input().split()))
B = list(map(int,input().split()))

C = B[0] - A[0] -1
if B[1] > A[1]:
    C+=1
elif B[1] == A[1]:
    if B[2] >= A[2]:
        C+=1
print(C)
print(B[0]-A[0]+1)
print(B[0]-A[0])
