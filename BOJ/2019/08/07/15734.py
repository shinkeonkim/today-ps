a,b,c=list(map(int,input().split()))
M=0
for i in range(0,c+1):
    M=max(M,min(a+i,b+(c-i)))
print(M*2)