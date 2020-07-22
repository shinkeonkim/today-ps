L = [input().split() for i in range(int(input()))]
L.sort(key = lambda t : (t[1],t[0]))
for i in L:
    print(i[0],i[1])