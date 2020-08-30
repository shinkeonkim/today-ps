right = set()
wrong = {}
cnt, total = 0,0
while True:
    a = input()
    if a == "-1":
        break
    t,p,result = a.split()
    if p in right:
        continue
    
    if result == "right":
        right.add(p)
        cnt+=1
        total += int(t)
    else:
        try:
            wrong[p]+=1
        except:
            wrong[p]=1
for i in wrong.keys():
    if i in right:
        total += wrong[i] * 20
print(cnt, total)