data = [[30,40],[35,30],[40,20]]

while True:
    a,b=map(int,input().split())
    if a==0 and b==0:
        break
    m = 999999999999
    for i in data:
        m = min(m,i[0]*a+i[1]*b)
    print(m)