N,C=list(map(int,input().split()))
A=set()
for i in range(N):
    A.add(int(input()))

time_line = [0] *(C+1)

A=list(A)

for i in A:
    for j in range(i,C+1,i):
        time_line[j]=1

print(time_line.count(1))