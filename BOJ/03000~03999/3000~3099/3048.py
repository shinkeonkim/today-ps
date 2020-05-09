a,b = map(int,input().split())
s1 = input()
s2 = input()
t = int(input())
s = s1[::-1]+s2


for _ in range(t):
    i =0
    while(i < a+b):
        if(i+1<a+b):
            if s[i] in s1 and s[i+1] in s2:
                s = s[:i] + s[i+1] + s[i] + s[i+2:]
                i+=1
        i+=1
print(s)