k = [True,False,False]
c = 3
n = int(input())
while len(k) <= n:
    k = k + [True] + [False] * c  + k 
    c+=1
if k[n-1]:
    print("m")
else:
    print("o")