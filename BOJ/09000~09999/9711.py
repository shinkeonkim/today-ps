L = [0, 1, 1]
for i in range(3, 11000):
    L.append(L[-1]+L[-2])
for tc in range(1, int(input())+1):
    p,q=map(int,input().split())
    print("Case #{}: {}".format(tc,L[p]%q))