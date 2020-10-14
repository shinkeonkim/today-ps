t,p = map(int,input().split())
if p > 20:
    pp = (100-p)/t
    ans = (p-20) * pp + 40 *pp
else:
    pp = (120-2*p)/t
    ans = 2*p/pp
print(ans)
