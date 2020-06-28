A = list(map(int,input().split()))
B = list(map(int,input().split()))
if (min(A[2],B[2])-max(A[0],B[0])) < 0 or (min(A[1],B[1])-max(A[3],B[3])) < 0:
    print(0)
else:
    print((min(A[2],B[2])-max(A[0],B[0]))*(min(A[1],B[1])-max(A[3],B[3])))