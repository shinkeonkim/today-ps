s = input()
n = int(input())
L = [input().split() for i in range(n)]

ansU,ansD = 1,100000
ans = "No Jam"
for i in range(n):
    s2 = L[i][0]

    idx,idx2 = 0,0
    while idx < len(s) and idx2 <len(s2):
        if s[idx] == s2[idx2]:
            idx+=1
        idx2+=1
    if idx == len(s):
        U = int(L[i][1])
        D = len(s2) - len(s)
        if(ansU*D < U*ansD):
            ansU = U
            ansD = D
            ans = L[i][0]
print(ans)

