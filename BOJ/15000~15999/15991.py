D = [1, 1, 2, 2]
for i in range(4, 100001):
    a = 0
    for j in range(2, min(i+1, 7), 2): 
        a += D[i-j]
    a %= 1000000009
    D.append(a)

for _ in range(int(input())):
    print(D[int(input())])