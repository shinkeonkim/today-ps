def f(h, m):
    h = h%12
    hourAngle = h*30 + (h//12)
    minuteAngle = m*6
    if hourAngle > minuteAngle:
        return (hourAngle - minuteAngle)
    else: 
        return (-hourAngle + minuteAngle)

a = 0
b = 1

S = set()
S.add(0)
while not (a==0 and b==0):
    S.add(f(a,b))
    b+=1
    if b == 60:
        b = 0
        a+=1
    if a == 24:
        a = 0

while True:
    try:
        i = int(input())
    except:
        break
    if i in S:
        print("Y")
    else:
        print("N")