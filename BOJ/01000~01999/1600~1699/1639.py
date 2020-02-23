L = list(map(int,list(input())))
ans = 0
for i in range(len(L)):
    for j in range(i+1,len(L),2):
        sub = L[i:j+1]
        if sum(sub[:len(sub)//2]) == sum(sub[len(sub)//2:]):
            if ans < len(sub):
                ans = len(sub)
print(ans)