import re
n = int(input())
cnt = 0
L = re.split("[.!?]+",input())
for i in L:
    cnt = 0
    k = (i.strip()).split()
    if k == []:
        continue
    for j in k:
        if j[0].upper() == j[0]:
            for jj in j:
                if not (('A' <= jj and jj <= 'Z') or ('a' <= jj and jj <= 'z')):
                    break
            else: 
                cnt+=1
    print(cnt)