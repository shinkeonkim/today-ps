input()
A = [*map(int,input().split())]
B = [*map(int,input().split())]

for i in B:
  for j in range(len(A)):
    if i <= A[j]:
      A[j] -= i
      break

print(sum(A))
