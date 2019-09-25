n=int(input())
a=int(input())
if n >=6:
    print("Love is open door")
else:
    for i in range(1,n):
        if i %2 == 0:
            print(a)
        else:
            print(1-a)