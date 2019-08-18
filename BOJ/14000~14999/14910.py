a=list(map(int,input().split()))
flag = True
for i in range(1,len(a)):
    if a[i-1] > a[i]:
        flag=False

if flag:
    print("Good")
else:
    print("Bad")