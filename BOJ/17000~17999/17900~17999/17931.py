n = int(input())
L = list(map(int,input().split()))
R = [L[0]]
for i in L[1:]:
    if R[-1] < i:
        R.append(i)
print(len(R))
print(" ".join(list(map(str,R))))