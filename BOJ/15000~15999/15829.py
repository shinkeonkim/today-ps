r=31
M=1234567891
n=input()
a=input()
S=0
for j,i in enumerate(a):
    S+= (ord(i)-96) * (r**j) 
    S%=M

print(S)