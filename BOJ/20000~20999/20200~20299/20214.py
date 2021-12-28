print(sorted([input().split() for i in range(int(input()))],key=lambda t:(-int(t[1]), t[0]))[0][0])
