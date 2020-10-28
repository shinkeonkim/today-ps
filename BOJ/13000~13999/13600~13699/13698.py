a=[1,0,0,2]
k={'A':[0,1],'B':[0,2],'C':[0,3],'D':[1,2],'E':[1,3],'F':[2,3]}
s=input()
for i in s:
    a[k[i][0]],a[k[i][1]]=a[k[i][1]],a[k[i][0]]
print(a.index(1)+1)
print(a.index(2)+1)
