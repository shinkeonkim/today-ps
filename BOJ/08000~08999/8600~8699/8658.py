n = int(input())

for i in range(2, n):
    if n % i:
        mn = i
        break

print(mn, n - 1)
