a = bin(int(input()))[2:][::-1]

print(*[i for i in range(len(a)) if a[i] == "1"])
