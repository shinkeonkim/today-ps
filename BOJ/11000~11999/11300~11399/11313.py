
n = int(input())

names = [input().split() for _ in range(n)]

names.sort(key=lambda t : (t[1], t[0]))

d = {}
for i,j in enumerate(names):
    d[j[0]+" "+j[1]] = i//3 

q = int(input())

for i in range(q):
    a = input()
    k = d[a]
    for i in range(k*3, k*3+3):
        s = names[i][0] + " " + names[i][1]
        if a != s:
            print(s)