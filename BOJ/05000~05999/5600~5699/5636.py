D=dict()
M=1000001
for i in range(M):
    D[i]=i
D[1]=-1
D[0]=-1
for i in range(2,M):
    if D[i]==i:
        for j in range(i+i,M,i):
            D[j]=-1

while True:
    a=input()
    m=0
    ss=0
    if a=='0':
        break
    
    for start in range(len(a)):
        for k in range(start,min(start+5,len(a))):
            s = int(a[start:k+1])
            if s <= M-1:
                if D[s] == s and s >ss:
                    ss=s
    print(ss)