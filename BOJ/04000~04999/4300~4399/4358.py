d = {}
cnt = 0
while True:
    a = ""
    try:
        a = input()
    except:
        break
    try:
        d[a]+=1
    except:
        d[a]=1
    finally:
        cnt+=1

L = sorted(list(d.items()),key =lambda t:t[0])
for i in L:
    print("%s %.4f" %(i[0],i[1]*100/cnt))