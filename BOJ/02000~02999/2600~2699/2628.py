w,h = map(int,input().split())
n = int(input())

row = [0,h]
column = [0,w]

for i in range(n):
    a,b = map(int,input().split())
    if a == 0:
        row.append(b)
    else:
        column.append(b)

row.sort()
column.sort()
# print(row)
# print(column)

ans = 0
for i in range(1,len(row)):
    for j in range(1,len(column)):
        S = (row[i] - row[i-1]) * (column[j] - column[j-1])
        if S > ans:
            ans = S

print(ans)