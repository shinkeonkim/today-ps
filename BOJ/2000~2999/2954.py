L=input().split()
a=[]
for i in L:
    a.extend(list(i))
    a.append(" ")
k = "aeiou"

for i in range(len(a)-2):
    if (a[i] in k) and a[i+1] == 'p' and (a[i+2] in k):
        a[i+1] = 'A'
        a[i+2] = 'A'
for i in a:
    if i != 'A':
        print(i,end="")