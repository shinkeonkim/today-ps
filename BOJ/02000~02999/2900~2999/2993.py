a = input()
n = len(a)
L = []
for i in range(1,len(a)):
    for j in range(i+1,len(a)):
        A = a[:i]
        B = a[i:j]
        C = a[j:]
        L.append(A[::-1]+B[::-1]+C[::-1])
L.sort()
print(L[0])