import sys
s=list(input())
d = {}
for i in s:
    try:
        d[i] +=1
    except:
        d[i] = 1

k = [d[i]%2 for i in d].count(1)

if k>=2:
    print("I'm Sorry Hansoo")
    sys.exit()

a = 0
if k == 1:
    for i in d:
        if d[i] %2 == 1:
            a = i

d = sorted(list(d.items()), key = lambda t:t[0])

for i in d:
    for j in range(i[1]//2):
        print(end=i[0])
if k==1:
    print(end=a)
for i in reversed(d):
    for j in range(i[1]//2):
        print(end=i[0])