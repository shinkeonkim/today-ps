L = list(map(int,input().split()))
if sum(L) in [0, 3]:
    print("*")
else:
    for i in range(3):
        if L.count(L[i]) == 1:
            print(chr(i+65))