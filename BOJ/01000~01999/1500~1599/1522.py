s = input()
answer = len(s)
k = s.count('a')
for i in range(len(s)):
    cnt = 0
    for j in range(k):
        if s[(i+j)%len(s)] == 'b':
            cnt+=1
    if cnt < answer:
        answer = cnt
print(answer)