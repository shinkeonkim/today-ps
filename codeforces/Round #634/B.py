tc = int(input())
for _ in range(tc):
    a,b,c=map(int,input().split())
    s = ""
    for i in range(c):
        s += chr(97+i)
    s2 = ""
    for i in range(b):
        s2 += s[i%c]
    ans = ""
    for i in range(a):
        ans +=s2[i%b]
    print(ans)