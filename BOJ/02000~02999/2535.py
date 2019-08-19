L=[]
award=dict()
cnt=0
k=0
for i in range(int(input())):
    L.append(list(map(int,input().split())))
L.sort(reverse=True,key=lambda t: t[2])
while cnt<3 and k < len(L):
    if L[k][0] not in award:
        award[L[k][0]] = 1
        print(L[k][0],L[k][1])
        cnt +=1
        k+=1
    elif award[L[k][0]] <2:
        award[L[k][0]] +=1
        print(L[k][0],L[k][1])
        cnt +=1
        k+=1
    else:
        k+=1