d = {"A": 4 ,"K": 3, "Q": 2, "J": 1, "X": 0}
s = 0
for i in range(int(input())):
    a = input()
    for j in a:
        s += d[j]
print(s)
