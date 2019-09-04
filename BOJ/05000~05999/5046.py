N,B,H,W =map(int,input().split())
ans = 9876543210
for i in range(H):
    p = int(input())
    L = list(map(int,input().split()))
    for i in L:
        if i >=N:
            if p*N <= B and p*N < ans:
                ans = p*N
if ans == 9876543210:
    print("stay home")
else:
    print(ans)