L = [1]
for i in range(50):
    L.append(L[-1]*3)
cnt=0
n = int(input())
for i in L[::-1]:
    if i <= n:
        cnt+=1
        n -=i
if n == 0 and cnt > 0:
    print("YES")
else:
    print("NO")