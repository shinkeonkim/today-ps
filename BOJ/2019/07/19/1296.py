a_c = [0, 0, 0, 0]
k = {'L': 0, 'O': 1, 'V': 2, 'E': 3}

names = []

a = input()
n = int(input())

n_c = [[0]*4 for i in range(n)]

for i in a:
    if i in k:
        a_c[k[i]] += 1

for i in range(n):

    b = input()
    for j in b:
        if j in k:
            n_c[i][k[j]] += 1
    score = 1
    for x in range(4):
        for y in range(x+1, 4):
            score *= ((a_c[x]+n_c[i][x]) + (a_c[y]+n_c[i][y]))

    names.append((b, score % 100))

names.sort(key=lambda t: t[0])
names.sort(key=lambda t: 100-t[1])

print(names[0][0])
