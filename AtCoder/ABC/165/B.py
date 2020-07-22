S = 100
X = int(input())
cnt = 1
while(S + S //100 < X):
    S = S + S//100
    cnt+=1
print(cnt)