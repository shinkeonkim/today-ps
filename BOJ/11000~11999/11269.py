s="PER"
a=input()
ans=0
for i,j in enumerate(a):
    if j != s[i%3]:
        ans+=1
print(ans)