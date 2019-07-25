def f(a):
    global n
    if n == 0 and a == 0:
        return True
    if n == a%10:
        return True
    if n == a//10:
        return True        

H1,M1=list(map(int,input().split()))
H2,M2=list(map(int,input().split()))
n=int(input())
    
S=0
while H1 != H2 or M1 != M2:
    if f(H1) or f(M1):
        S+=1
    if M1 + 1 == 60:
        M1=0
        H1+=1
    else:
        M1+=1
if f(H2) or f(M2):
    S+=1
print(S)