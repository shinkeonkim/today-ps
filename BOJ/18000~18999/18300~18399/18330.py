n=int(input())
k=int(input())
k+=60
print(min(n,k) * 1500 + max(0, n-k)*3000)