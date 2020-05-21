N = int(input())
L = []
while True:
    try:
        a = list(map(int,input().split()))
    except:
        break
    else:
        L.append(a)

stk1 = [i for i in range(N,0,-1)]
stk2 = []
stk3 = []

for i in range(len(L)):
    if L[i][0] == 1:
        for j in range(L[i][1]):
            stk2.append(stk1.pop())
    else:
        for j in range(L[i][1]):
            stk3.append(stk2.pop())

for i in stk3[::-1]:
    print(i)
