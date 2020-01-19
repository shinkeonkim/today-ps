N = int(input())
k = 9
L = []
s = ['PROBRAIN', 'GROW', 'ARGOS', 'ADMIN', 'ANT', 'MOTION', 'SPG', 'COMON', 'ALMIGHTY']
for i in range(k):
    L.append(list(map(int,input().split())))

M = [max(i) for i in L]

print(s[M.index(max(M))])