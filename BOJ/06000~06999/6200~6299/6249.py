n,pre,mx = map(int,input().split())
for i in range(n):
    a = int(input())
    if pre-a >0:
        print("NTV: Dollar dropped by {} Oshloobs".format(pre-a))
    pre = a
    if mx < a:
        print("BBTV: Dollar reached {} Oshloobs, A record!".format(a))
        mx = a