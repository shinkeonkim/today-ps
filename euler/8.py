answer = 0
s = ""

for i in range(20):
    s += input()
L = list(map(int,list(s)))

for i in range(4,1000):
    k = 1
    for j in range(i-4,i+1):
        k*=L[j]
    if k > answer:
        answer = k

print(answer)