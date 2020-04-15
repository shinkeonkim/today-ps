from sys import stdin
n = int(stdin.readline())
L = [int(stdin.readline()) for i in range(n)]
print(sum([(L[i]-L[i-1])**2 for i in range(1,n)]))