X = []
Y = []

for i in range(2):
    L = list(map(int,input().split()))
    X.extend([L[0],L[2]])
    Y.extend([L[1],L[3]])

K = max(max(X)-min(X),max(Y)-min(Y))
print(K*K)   