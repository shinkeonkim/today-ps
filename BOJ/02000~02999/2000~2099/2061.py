a,b=map(int,input().split())
for i in range(2,b):
    if a%i==0:
        print("BAD",i)
        break
else:
    print("GOOD")