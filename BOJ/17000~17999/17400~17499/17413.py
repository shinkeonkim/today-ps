s = input()
ans = ""
chk = False
current = ""
for i in s:
    if chk:
        current += i
        if i == ">":
            ans += current
            current = ""
            chk = False
    else:
        if i == "<":
            ans += current[::-1]
            chk = True
            current = i
        elif i == " ":
            ans += current[::-1]
            ans += " "
            current = ""
        else:
            current+=i
ans += current[::-1]
print(ans)