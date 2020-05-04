k = []
word = ""
M= 0
while True:
    try:
        a=input()
    except:
        break
    k.extend(a.split())

for i in k:
    c = 0
    s = 0
    e = 0
    for j in i:
        if (ord('a') <= ord(j) <= ord('z') or ord('A') <= ord(j) <= ord('Z') or j == '-'):
            c+=1
            e+=1
            if c>M:
                M=c
                word=i[s:e]
        else:
            e+=1
            s=e
            c=0
print(word.lower())