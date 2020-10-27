L = sorted(list(map(int,input().split())))
n = int(input())
cnt = 0
S = set()
for i in range(len(L)):
    for j in range(i+1,len(L)):
        if L[i] + L[j] == n:
            S.add((L[i], L[j]))   
for i in sorted(list(S), key=lambda t:(t[0], t[1])):
    print(i[0], i[1])
print(len(S))