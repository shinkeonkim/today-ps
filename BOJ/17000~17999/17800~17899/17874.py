X,a,b=map(int,input().split())
print(4*max([a*b,a*(X-b),(X-a)*b,(X-a)*(X-b)]))