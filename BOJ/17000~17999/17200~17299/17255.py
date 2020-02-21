cnt = 0

def dfs(s):
    global cnt
    if len(n) == 1:
        cnt +=1
        return
    else:
        L = set(list(s))
        if len(L) == 1:
            cnt+=1
            return
        else:
            dfs(s[1:])
            dfs(s[:-1])

n = input()
dfs(n)
print(cnt)