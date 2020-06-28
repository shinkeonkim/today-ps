n = int(input())
s = 0
k = 0
while n >= s:
    k += 1
    s += k*k + (k-1)*(k-1)

if(n < s):
    k-=1
print(k)