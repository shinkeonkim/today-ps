import sys
input = sys.stdin.readline

p = []
D = [True]*1100000
D[0] = D[1] = False
for i in range(2,1000000):
    if D[i]:
        p.append(i)
        for j in range(i+i,1000000,i):
            D[j] = False

for _ in range(int(input())):
    a = int(input())
    cnt = 0
    for j in p:
        if j >= a:
            break
        if D[a-j]:
            cnt+=1
        if D[a-j] and a == 2*j:
            cnt+=1
    print(cnt//2)