d = [2, 1, 4, 3]
idx = {'B':0,'C':1,'M':2,'W':3}
name = ["Bobcat","Coyote","Mountain Lion","Wolf"]
n = int(input())
for i in range(n):
    a,b = input().split()
    s = [0]*4
    for i in b:
        s[idx[i]] +=1
    for i in range(4):
        s[i] *= d[i]
    
    if(s.count(max(s))>1):
        print("{}: There is no dominant species".format(a))
    else:
        print("{}: The {} is the dominant species".format(a,name[s.index(max(s))]))