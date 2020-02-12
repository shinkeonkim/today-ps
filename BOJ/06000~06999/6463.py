from math import factorial as f
while True:
    try:
        a=input()
    except:
        break
    
    s = len(a)
    b=f(int(a))
    while(b%10 ==0):
        b//=10
    print((5-s)*" "+a+" -> "+str(b%10))
