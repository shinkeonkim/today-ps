n = int(input())
L = list(map(int,input().split()))
print(min(n-L.count(0),n-L.count(1)))