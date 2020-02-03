import math
a = int(input())

L = []
for i in range(1,int(math.sqrt(a))+1):
    if (a-i) % i == 0:
        L.append(i)
    if a%i == 0 and (a-(a//i)) %(a//i) == 0:
        L.append(a//i)
while 1 in L:
    L.remove(1)
while 2 in L:
    L.remove(2)
print(min(L))