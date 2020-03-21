def f(k):
    return k%2 if ((k-1)//8)%2 == 0 else 1-(k%2)
for i in range(int(input())):
    a,b = input().split()
    a = f((int(a[1])-1)*8 + (ord(a[0])-64))
    b = f(int(b))
    if a!=b:
        print("NO")
    else:
        print("YES")