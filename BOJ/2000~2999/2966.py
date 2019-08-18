n=input()
s=input()
L=[0,0,0]
names=["Adrian","Bruno","Goran"]
for i in range(len(s)):
    if ord(s[i])-ord('A') == i%3:
        L[0]+=1
    if i%2==0 and s[i]=='B':
        L[1]+=1
    if i%2==1 and (((i//2)%2==0 and s[i]=='A') or ((i//2)%2==1 and s[i]=='C')):
        L[1]+=1
    if ord(s[i])-ord('A') == (i//2+2)%3:
        L[2]+=1
print(max(L))
for i in range(len(L)):
    if L[i] == max(L):
        print(names[i])