N = int(input())
L = sorted(list(map(int,input().split())),reverse=True)
print(sum(L[0::2]),sum(L[1::2]))