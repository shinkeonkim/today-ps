n, m = map(int, input().split())
l = [*map(int, input().split())]
z = [[*map(int, input().split())] for i in range(n)]

print(sum([z[l[i] - 1][l[i + 1] - 1] for i in range(m - 1)]))
