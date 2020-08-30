L = list(map(float,input().split()))
L2 = list(map(float,input().split()))

Z = min([L[i]/L2[i] for i in range(3)])

for i in range(3):
    print(L[i] - L2[i]*Z, end = " ")