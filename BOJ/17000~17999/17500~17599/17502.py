n=int(input())
s=input()
for i in range(n):
    if s[i]=='?':
        if s[n-i-1] == '?':
            print(end="a")
        else:
            print(end=s[n-i-1])
    else:
        print(end=s[i])