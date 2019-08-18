binary = ["0111111","0001010","1011101","1001111","1101010","1100111","1110111","0001011","1111111","1101011"]
two2ten =[int(i,2) for i in binary]
def f(S):
    k = 0
    for i in range(0,len(S),3):
        t = int(S[i:i+3])
        k *=10
        k += two2ten.index(t)
    return k
while True:
    a=input()
    if a == 'BYE':
        break
    a=a.replace('=','')
    A,B=a.split("+")

    S= f(A)+f(B)
    print(a,end="=")
    s=""
    while(S>0):
        s += "%03d" %(two2ten[S%10])
        S//=10
    for i in range(len(s)-1,-1,-3):
        print(s[i-2]+s[i-1]+s[i],end="")
    print()