a=int(input())
b=int(input())

if a > b:
    if 360-a + b > (a-b):
        print(b-a)
    else:
        print(360-a+b)
else:
    if b-a > 360-b+a:
        print(-360+b-a)
    else:
        print(b-a)