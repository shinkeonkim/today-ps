from math import sqrt
R,B=list(map(int,input().split()))
S = R+B
for i in range(1, int(sqrt(S))+1):
    if S % i ==0 :
        a = i
        b = S // i
        if a<b:
            a,b=b,a
        if a>2 and b>2 and (a-2)*(b-2) == B:
            print(a,b)