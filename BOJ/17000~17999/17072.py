def f(R,G,B):
    return 2126*R+7152*G+722*B

def g(a):
    if 0 <= a <510000:
        return "#"
    elif 510000<= a<1020000:
        return "o"
    elif 1020000<=a<1530000:
        return "+"
    elif 1530000<=a<2040000:
        return "-"
    elif a>=2040000:
        return "."

N,M=list(map(int,input().split()))
L=[]
for i in range(N):
    L.append(list(map(int,input().split())))

for i in range(N):
    for j in range(0,3*M,3):
        print(g(f(L[i][j],L[i][j+1],L[i][j+2])),end="")
    print()