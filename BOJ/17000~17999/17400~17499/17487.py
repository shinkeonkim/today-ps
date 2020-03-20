L = "qwertyasdfgzxcvb"

s = input()
s2 = s.lower()
cnt = [0,0]
blank = 0
for i in range(len(s2)):
    if s2[i] == " ":
        blank +=1
    else:
        if s2[i] in L:
            cnt[0]+=1
        else:
            cnt[1]+=1
        if s2[i] != s[i]: # lower
            blank +=1

while blank > 0:
    if cnt[0] <= cnt[1]:
        cnt[0]+=1
    else:
        cnt[1]+=1
    blank -=1
print(cnt[0],cnt[1])