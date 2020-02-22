n,m=map(int,input().split())
L = [list(map(int,list(input()))) for i in range(n)]
# print(L)

check = True
cnt = 0
for i in range(n):
    for j in range(m):
        k = L[i][j]
        k2 = L[n-i-1][m-j-1]

        if i == n-i-1 and j == m-j-1:
            if k == k2:
                if k != 8:
                    check = False
 
        if k == 7:
            if k2 == 7:
                cnt+=1
            else:
                check = False
        elif k == 6:
            if k2 == 6:
                cnt+=1
            elif k2 == 9:
                continue
            else:
                check = False
        elif k == 8:
            if k2 == 8:
                continue
            else:
                check = False
        elif k == 9:
            if k2 == 6:
                continue
            elif k2 == 9:
                cnt+=1
            else:
                check = False
        
if check:
    print(cnt//2)
else:
    print(-1)

