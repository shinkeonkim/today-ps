n = int(input())
k = 1
mod = 10000000000000000
for i in range(1, n+1):
    k*=i
    while k%10 == 0:
        k//=10
    k%=mod
s = "00000"+str(k)
for i in range(-5,0,1): 
    print(end=s[i])