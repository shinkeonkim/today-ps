s = 2
a = 1
b = 2
while(a+b <= 4000000):
    c = a+b
    if c % 2==0:
        s+=c
    a,b = b,c
print(s)