import math

for i in range(int(input())):
    L = input().split()
    if L[0] == 'H':
        print("%.2f" %(-math.log10(float(L[2]))))
    else:
        print("%.2f" %(14+math.log10(float(L[2]))))