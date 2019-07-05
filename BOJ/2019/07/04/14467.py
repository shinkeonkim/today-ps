s=0
dic = dict()
for _ in range(int(input())):
    a,b=map(int,input().split(" "))
    if a in dic:
        if dic[a] != b:
            s+=1
            dic[a] = b
    else:
        dic[a] = b

print(s)