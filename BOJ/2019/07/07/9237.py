m=0
n=input()
for i,j in enumerate(sorted(list(map(int,input().split(" "))),reverse=True)):
    m=max(m,i+2+j)
print(m)

