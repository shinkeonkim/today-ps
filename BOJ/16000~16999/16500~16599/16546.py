N = int(input())
S = sum(list(map(int,input().split())))
print(N*(N+1)//2 - S)