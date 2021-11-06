s, v1, v2 = map(int, input().split())

z = []
for i in range(s // v1, -1, -1):
    ss = s - v1 * i
    if ss % v2 == 0:
        print(i, ss // v2)
        break
else:
    print("Impossible")
