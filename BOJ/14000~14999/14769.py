n = int(input())
L = []
for i in range(n):
    a,b = input().split()
    try:
        a = int(a)
        L.append((a,b))
    except:
        b = int(b)
        L.append((b*2,a))
L.sort(key = lambda t :t[0])
for i in L:
    print(i[1])