n = int(input())
k = 10
while(k < n):
    n = ((n + (k//10)*5)//k)*k
    k*=10
print(n)