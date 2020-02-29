ans = 0
for i in range(100,1000):
    for j in range(i,1000):
        s = i*j
        s = str(s)
        if s == s[::-1] and int(s) > ans:
            ans = int(s)
print(ans)