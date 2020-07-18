s = list(input())
L = [s[0]]
for i in range(1,len(s)):
    if L[-1] != s[i]:
        L.append(s[i])
print(min(L.count('0'),L.count('1')))