n = int(input())
k = int(input())

check = [0]*101
cnt = [0]*3
for i in range(k):
    a,b=input().split()
    a=int(a)
    if b == 'R':
        for j in range(a+1,101):
            check[j]+=1
    else:
        for j in range(1,a):
            check[j]+=1

for i in range(1,101):
    cnt[check[i]%3]+=1

for i in range(3):
    print("%.2f" %(n * cnt[i] / 100))