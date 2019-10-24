n = int(input())
L = input().split()
check = True
for i in range(1,n+1):
    if L[i-1] != "mumble":
        if i != int(L[i-1]):
            check = False
if check:
    print("makes sense")
else :
    print("something is fishy")
