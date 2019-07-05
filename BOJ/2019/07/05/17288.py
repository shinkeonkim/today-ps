a=list(map(int,list(input())))
total=0
cnt=1
for i in range(1,len(a)):
    if a[i]-a[i-1] ==1:
        cnt+=1
    else:
        if cnt == 3:
            total+=1
        cnt=1
if cnt == 3:
    total+=1
print(total)