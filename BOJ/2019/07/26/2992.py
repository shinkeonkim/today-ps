a=input()
b=int(a)
a=list(a)
a.sort()
for i in range(b+1,1100000):
    k = list(str(i))
    k.sort()
    if k == a:
        print(i)
        break
else:
    print(0)