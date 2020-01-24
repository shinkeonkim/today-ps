s = """ejp mysljylc kd kxveddknmc re jsicpdrysi rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd de kr kd eoya kw aej tysr re ujdr lkgc jvzq"""
s2 = """our language is impossible to understand there are twenty six factorial possibilities so it is okay if you want to just give upqz"""

d = {}
for i in range(len(s)):
    d[s[i]] = s2[i]

for i in range(int(input())):
    a = input()
    print("Case #{}: ".format(i+1),end="")
    for i in a:
        print(d[i],end="")
    print()