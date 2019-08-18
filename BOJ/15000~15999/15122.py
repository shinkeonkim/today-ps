a=int(input())
a+=1
while True:
    b = set(list(str(a)))
    if '0' in b:
        a+=1
    else:
        break
print(a)
