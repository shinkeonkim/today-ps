from bisect import bisect, bisect_left

ans = 987654321
N,H = map(int,input().split())
L = []
U = []
for i in range(N//2):
    L.append(int(input()))
    U.append(int(input()))

L.sort()
U.sort()

cnt = 0

for i in range(1,H+1):
    l_cnt = len(L) - bisect_left(L,i,0,len(L))
    u_cnt = len(L) - bisect(U,H-i,0,len(U))
    if l_cnt + u_cnt < ans:
        ans = l_cnt + u_cnt
        cnt = 1
        # print("*",i,"*")
    elif l_cnt + u_cnt == ans:
        cnt+=1
        # print("*",i,"*")

print(ans,cnt)

