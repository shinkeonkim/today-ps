N = int(input())
cnt = 0
k = 665
while cnt < N:
    k+=1
    check = False
    l = str(k)
    if "666" in l:
        check = True
    
    if check:
        cnt+=1
print(k)