n = int(input())
cnt = 0
while n != 1:
    if n % 2 == 1:
        n = n*3 +1
    else:
        n//=2
    cnt+=1
print(cnt)