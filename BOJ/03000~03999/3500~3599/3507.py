n = int(input())
cnt = 0
for i in range(0,100):
    for j in range(0,100):
        if n == i+j:
            cnt+=1
print(cnt)