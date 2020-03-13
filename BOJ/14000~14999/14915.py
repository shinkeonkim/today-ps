import sys
n,m = map(int,input().split())
ret = ""
if n == 0:
    print(0)
    sys.exit()

while n > 0:
    if n%m <10:
        ret+= str(n%m)
    else:
        ret += chr(55+n%m)
    n//=m
print(ret[::-1])