s="ABCD"
L=[0,1,2,1,2,3,2,3,0,3,0,1]
for t in range(int(input())):
    print(s[L[(int(input())-1) %12]])