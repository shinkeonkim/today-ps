M=-1
a=int(input())
L=list(str(a)).sort()
for i in range(1, 1000000):
    if i > a and M < i:
        k = list(str(i)).sort()
        print(k)
        if k == L:
            M = i
print(M)