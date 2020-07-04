s = "12010000000000111100000000"
for _ in range(int(input())):
    ans = 0
    k = input()
    for i in k:
        if i != " ":
            ans += int(s[ord(i) - 65])
    print(ans)