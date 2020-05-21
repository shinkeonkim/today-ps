from sys import stdin
Q,mod = map(int,stdin.readline().split())
stk_ar = [[] for i in range(mod)]

stk = []

for i in range(Q):
    query = list(map(int,stdin.readline().split()))
    if len(query) == 1:
        if query[0] == 2:
            if len(stk) > 0:
                stk_ar[(stk.pop() % mod)].pop()
        elif query[0] == 3:
            chk = True
            m = len(stk)
            for k in stk_ar:
                if len(k) == 0:
                    chk = False
                else:
                    m = min(m, k[-1])
            if chk:
                print(len(stk) - m)

            else:
                print(-1)
    else:
        stk.append(query[1]%mod)
        stk_ar[(query[1] % mod)].append(len(stk)-1)