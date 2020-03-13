n = int(input())
left = int(input())
L = []

for total in range(n,3000):
    z = total // n
    last = total - left
    if z == last:
        L.append(total)

print(L[0],L[-1])