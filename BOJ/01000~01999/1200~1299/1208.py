def dfs(idx, dic, l, crt):
    if idx == len(l)-1:
        try:
            dic[crt] += 1
        except:
            dic[crt] = 1
        try:
            dic[crt + l[idx]]+=1
        except:
            dic[crt + l[idx]] = 1
    else:
        dfs(idx+1, dic, l, crt);
        dfs(idx+1, dic, l, crt + l[idx]);
        

N,S = map(int,input().split())
L = list(map(int,input().split()))
L1 = L[:len(L)//2+1]
L2 = L[(len(L)//2)+1:]

d1 = {}
d2 = {}

if len(L1) > 0:
    dfs(0, d1, L1, 0)
if len(L2) > 0:
    dfs(0, d2,L2, 0)

ans = 0

for i in d1.items():
    crt = i[0]
    crt_cnt = i[1]
    obj = S - crt
    try:
        obj_cnt = d2[obj]
    except:
        obj_cnt = 0
    
    if crt == S and obj_cnt == 0:
        ans += crt_cnt
        continue

    if obj == 0 and crt == 0:
        ans -= 1
    ans += crt_cnt * obj_cnt

print(ans)
