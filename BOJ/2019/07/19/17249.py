a=input()
k = -1
for i in range(len(a)):
    if a[i] == '(':
        k=i
print(a[:k].count('@='),a[k+5:].count('=@'))