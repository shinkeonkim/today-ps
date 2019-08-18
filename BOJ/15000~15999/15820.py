sat = True
syt = True

a,b=map(int,input().split(" "))

for i in range(a):
    i,j=map(int,input().split(" "))
    if i != j:
        sat =False

for i in range(b):
    i,j=map(int,input().split(" "))
    if i != j:
        syt =False

if sat and syt:
    print("Accepted")
elif sat and not syt:
    print("Why Wrong!!!")
else:
    print("Wrong Answer")