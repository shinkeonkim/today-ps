answer = 0
l=[]
a=input()
for i,j in enumerate(a):
    if j in l:
        answer+=len(l)-1-l.index(j)
        l.remove(j)
    else:
        l.append(j)
print(answer)
    