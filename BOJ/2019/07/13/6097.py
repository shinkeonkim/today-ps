N,P=list(map(int,input().split()))
A=str(N**P)
for i in range(len(A)):
    if i !=0 and i % 70 == 0:
        print()
    print(end=A[i])