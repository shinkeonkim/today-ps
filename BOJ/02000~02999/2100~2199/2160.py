n=int(input())
L=[]
for i in range(n):
    k=""
    for j in range(5):
        k += input()
    L.append(k)
m = 98765432
p1 = -1
p2 = -1
for i in range(n):
    for j in range(i+1,n):
        cnt = 0
        for k in range(35):
            if L[i][k] != L[j][k]:
                cnt += 1
        if m > cnt:
            m = cnt
            p1 = i+1
            p2 = j+1
print(p1,p2)