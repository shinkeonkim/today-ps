from sys import stdin
for i in range(int(stdin.readline())):
    s = stdin.readline()[:-1]
    s = "R" + s + "R"
    L = [0]
    for i in range(1,len(s)):
        if s[i] == "R":
            L.append(i)
    # print(L)
    L2 = [L[i] - L[i-1] for i in range(1,len(L))]
    print(max(L2))