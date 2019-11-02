n = int(input())
L = []
for i in range(n):
    L.append(int(input()))
check = True
for i in range(1,L[-1]+1):
    if i not in L:
        print(i)
        check = False

if check:
    print("good job")