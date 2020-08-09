n = int(input())
s = input()
num = 0
low = 0
up = 0
special = 0
for i in s:
    if '0' <= i <= '9':
        num = 1
    elif 'a' <= i <= 'z':
        low = 1
    elif 'A' <= i <= 'Z':
        up = 1
    else:
        special = 1

must = 4 - (num + low + up + special)

print(max(must, 6-len(s)))