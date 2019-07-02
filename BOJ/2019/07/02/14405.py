import re
p= re.compile('(pi|ka|chu)')
a= input()
m = p.sub('',a)
if m == "":
    print("YES")
else:
    print("NO")