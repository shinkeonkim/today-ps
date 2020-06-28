from math import factorial as f
for t in range(int(input())):
    k = f(int(input()))
    while(k%10 ==0):
        k//=10
    print(k%10)