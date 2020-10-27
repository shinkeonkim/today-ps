s = input()
cnt = 1
cur = s[0]
for i in s[1:]:
    if cur < i:
        cur = i
    else:
        cnt+=1
        cur = i
print(cnt)