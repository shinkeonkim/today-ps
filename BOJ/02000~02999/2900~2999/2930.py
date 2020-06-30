def f(A, B):
    s = "RSP"
    if A == B:
        return 1
    if s[s.index(A) - 1] == B:
        return 0
    return 2

R = int(input())
a = input()
N = int(input())
L = [input() for i in range(N)]

totalA = totalB = 0
for i in L:
    for j in range(R):
        totalA += f(a[j],i[j])

for i in range(R):
    z = 0
    for j in "RSP":
        s = 0
        for k in L:
            s += f(j, k[i])
        z = max(z,s)
    totalB += z

print(totalA)
print(totalB)