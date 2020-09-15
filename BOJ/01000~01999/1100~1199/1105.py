a,b = input().split()
ans = 0
if len(a) != len(b):
    print(0)
else:
    for i in range(0, len(a)):
        if a[i] != b[i]:
            break
        else:
            if a[i] == '8':
                ans+=1
    print(ans)