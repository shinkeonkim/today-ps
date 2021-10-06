ans = []

special = "().;:"

def rm_special_blank(s):
    while True:
        n = len(s)
        chk = True
        for i in range(1, n):
            if s[i] in special and s[i-1] == ' ':
                s = s[:(i-1)] + s[i:]  
                chk = False
                break
        if chk:
            break

    while True:
        n = len(s)
        chk = True
        for i in range(0, n-1):
            if s[i] in special and s[i+1] == ' ':
                s = s[:(i+1)] + s[(i+2):]
                chk = False
                break
        if chk:
            break
    return s


for t in range(1,int(input())+1):
    L = ((",",";"),("{","("),("}",")"),("[","("),("]",")"))

    a = input().lower().strip()
    b = input().lower().strip()
    for i in L:
        a = a.replace(i[0],i[1],len(a))
        b = b.replace(i[0],i[1],len(b))
    while "  " in a:
        a=a.replace("  "," ")
    while "  " in b:
        b=b.replace("  "," ")
    
    a = rm_special_blank(a)
    b = rm_special_blank(b)
    
    if a != b:
        ans.append("Data Set {}: not equal".format(t))
    else:
        ans.append("Data Set {}: equal".format(t))
for s in ans:
    print(s+"\n")
