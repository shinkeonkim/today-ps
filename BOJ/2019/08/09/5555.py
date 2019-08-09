ans = 0
a=input()
for _ in range(int(input())):
    s=input()
    for start in range(10):
        for j in range(len(a)):
            if a[j] != s[(start+j)%10]:
                break
        else:
            ans+=1
            break
print(ans)