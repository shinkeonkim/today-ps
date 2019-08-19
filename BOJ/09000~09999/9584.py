A="".join(input().split())
n=int(input())
ans=[]
for i in range(n):
    a=input()
    for j in range(9):
        if A[j] != a[j] and A[j] !="*":
            break
    else:
        ans.append(a)
print(len(ans))
for i in ans:
    print(i)