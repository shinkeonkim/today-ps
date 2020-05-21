from sys import stdin
N = int(stdin.readline())
stk = []
ans = 0
for i in range(N):
    order = list(map(int,stdin.readline().split()))
    if len(order) == 1:
        if len(stk) == 0:
            continue
        else:
            stk[-1][1]-=1
            if(stk[-1][1] <= 0):
                ans+=stk[-1][0]
                stk.pop()
    else:
        stk.append([order[1],order[2]-1])
        if(stk[-1][1] <= 0):
            ans+=stk[-1][0]
            stk.pop()

print(ans)
