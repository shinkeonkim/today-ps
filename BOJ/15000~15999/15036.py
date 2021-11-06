input()
print(sum([16 // i if i != 0 else 32 for i in [*map(int, input().split())]]) / 16)
