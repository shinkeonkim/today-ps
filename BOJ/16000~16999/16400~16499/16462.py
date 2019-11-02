r = []
n = int(input())
for _ in range(n):
    L = list(input())
    for i in range(len(L)):
        if L[i] == '0' or L[i] == '6':
            L[i] = '9'
    r.append(min(100,int("".join(L))))

print(int(sum(r)/n + 0.5))