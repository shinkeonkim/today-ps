L=[]
n=int(input())
for i in range(n):
    L.append(int(input()))
if L[-1]-L[-2] == L[-2]-L[-3]:
    print(L[-1]*2-L[-2])
else:
    print(L[-1]*(L[-1]//L[-2]))