n = int(input())
X,Y=[],[]
for i in range(n):
    a,b=map(int,input().split())
    X.append(a)
    Y.append(b)
print(max(max(X)-min(X),max(Y)-min(Y))**2)