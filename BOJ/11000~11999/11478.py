s = input()
ans = set()

for i in range(0,len(s)):
    for j in range(i,len(s)):
        ans.add(s[i:j+1])

print(len(ans))