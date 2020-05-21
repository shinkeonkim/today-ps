n,k = map(int,input().split())
L = list(map(int,list(input())))
stk = []
cnt = 0
for i in L:
    while len(stk) > 0 and stk[-1] < i and cnt < k:
        stk.pop()
        cnt +=1
    stk.append(i)

while len(stk) > 0 and stk[-1] < 10 and cnt < k:
    stk.pop()
    cnt +=1

for i in stk:
    print(i,end="")