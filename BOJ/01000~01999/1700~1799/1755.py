L = ["zero","one","two","three","four","five","six","seven","eight","nine"]
M,N = map(int,input().split())
D = []
for i in range(M,N+1):
    k = str(i)
    s = ""
    for j in k:
        s += L[int(j)]
    D.append([i,s])

D.sort(key = lambda t : t[1])
for i in range(len(D)):
    print(D[i][0], end = "")

    if i % 10 == 9:
        print()
    else:
        print(end = " ")

