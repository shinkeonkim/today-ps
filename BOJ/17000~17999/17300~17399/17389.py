input()
a=input()
S,c=0,0
for i in range(len(a)):
    if a[i] == 'O':
        S+=i+1
        S+=c
        c+=1
    else:
        c=0
print(S)
