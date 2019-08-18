N=int(input())
L=int(input())
S=input()

arr = []

i = 0
cnt = 0
answer = 0

while i < L:
    if i + 2 < L:
        if S[i] == 'I' and S[i+1] == 'O' and S[i+2] == 'I':
            cnt += 1
            i += 1
        else:
            arr.append(cnt)
            cnt = 0
    else:
        arr.append(cnt)
        cnt = 0
    i += 1
arr.append(cnt)

for i in arr:
    if i-N+1>0:
        answer += i-N+1

print(answer) 

