n=int(input())
c=0
a=input()
b=input()
for i in range(n):
    if a[i] == b[i] == 'C':
        c+=1
print(c)