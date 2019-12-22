n = int(input())
result = []
k = 2
while n > 1:
    cnt = 0
    while n % k == 0:
        cnt+=1
        n//=k
    if cnt > 0:
        result.append([k,cnt])
    k+=1
print(result)