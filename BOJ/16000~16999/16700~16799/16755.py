z = "HONI"
s = input()
idx = 0
cnt = 0
for i in s:
    if i == z[idx]:
        idx+=1
    if idx == 4:
        cnt += 1
        idx = 0
print(cnt)
