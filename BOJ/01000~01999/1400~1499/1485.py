import itertools

def dis(a,b):
    return (a[0]-b[0])**2 + (a[1]-b[1])**2

def f(A):
    k = dis(A[0],A[3])
    for i in range(3):
        if k != dis(A[i],A[i+1]):
            return False
    
    if dis(A[0],A[2]) == dis(A[1],A[3]):
        return True
    return False

t = [0,1,2,3]
L = list(itertools.permutations(t,4))

for i in range(int(input())):
    D = [list(map(int,input().split())) for _ in range(4)]

    for j in L:
        A = [D[j[k]] for k in j]
        
        if f(A):
            print(1)
            break
    else:
        print(0)