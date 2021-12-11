n, k = map(int, input().split())
l = [int(input()) for i in range(n)]
print(sum([l[i] >= l[i + 1] + k for i in range(n - 1)]))
