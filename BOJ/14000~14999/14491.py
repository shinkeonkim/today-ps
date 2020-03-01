n = int(input())
ret = []
while(n>0):
    ret.append(n%9)
    n//=9
if len(ret) == 0:
    print(0)
else:
    for i in ret[::-1]:
        print(i,end="")