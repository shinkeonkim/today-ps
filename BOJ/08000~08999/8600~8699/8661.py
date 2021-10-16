x, k, a = map(int,input().split())
z = x % (k+a)
print(0 if z >= k else 1)
