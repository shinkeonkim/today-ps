X=[]
Y=[]
for i in range(int(input())):
  a,b=map(int,input().split(','))
  X.append(a)
  Y.append(b)
print(f"{min(X)-1},{min(Y)-1}")
print(f"{max(X)+1},{max(Y)+1}")