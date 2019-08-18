a,b=input().split()
b=int(b)
cnt=0
a1,a2=a.split(".")
a1=int(a1)
for i in a2:
    a1 *=10
    a1 +=int(i)
    cnt+=1

num = str(a1**b)

if b*cnt-len(num)+1>0:
    num = "0"*(b*cnt-len(num)+1) +num

for i in range(len(num)):
    if i == len(num)-cnt*b:
        print(end=".")
    print(num[i],end="")