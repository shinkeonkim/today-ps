import copy
n=int(input())
A = {"a":"A","b":"B","k":"C","d":"D","e":"E","g":"F","h":"G","i":"H","l":"I","m":"J","n":"K","*":"L","o":"M","p":"N","r":"O", "s":"P", "t":"Q", "u":"R", "w":"S", "y":"T"}
D=[]
for i in range(n):
    D.append([i,input()])

L=copy.deepcopy(D)

for i in range(n):
    L[i][1]=L[i][1].replace("ng","*")
    k=list(L[i][1])
    for j in range(len(k)):
        k[j]=A[k[j]]
    k="".join(k)
    L[i][1]=k
L.sort(key=lambda t: t[1])
for i in L:
    print(D[i[0]][1])

    