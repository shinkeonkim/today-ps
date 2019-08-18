a,b=list(map(int,input().split()))
K = 10**b

last = a%K
a -= last

if last // (K//10) > 4:
    a+=K

print(a)
