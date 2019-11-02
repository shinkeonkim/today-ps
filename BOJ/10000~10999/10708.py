n = int(input())
m = int(input())
target = list(map(int,input().split()))
score = [0]*(n+1)
for i in range(m):
    game = [0] + list(map(int,input().split()))
    cnt = 0
    for j in range(1,n+1):
        if game[j] == target[i]:
            score[j]+=1
        else:
            cnt+=1
    score[target[i]] += cnt
for i in range(1,n+1):
    print(score[i])