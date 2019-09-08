M = [0,31,28,31,30,31,30,31,31,30,31,30,31]
def g(y):
    if y % 400 == 0 or (y % 4 ==0 and y%100 != 0):
        return True
    return False
 
def f(d,m,y):
    cnt = 0
    for i in range(1,m):
        cnt +=M[i]
        if i == 2 and g(y):
            cnt+=1
    cnt +=d
    return cnt

while True:
    d,m,y = map(int,input().split())
    if d == m == y == 0:
        break
    print(f(d,m,y))