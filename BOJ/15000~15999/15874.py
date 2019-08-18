k,a=list(map(int,input().split()))
b=input()

for i in b:
    if ord('A') <= ord(i) <=ord('Z'):
        print(chr((ord(i)-ord('A')+k)%26+ord('A')),end="")
    elif ord('a') <= ord(i) <= ord('z'):
        print(chr((ord(i)-ord('a')+k)%26+ord('a')),end="")
    else:
        print(i,end="")
print()