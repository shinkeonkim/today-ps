S,A,B=input().split()
S = int(S.split(".")[0])*100 + int(S.split(".")[1])
A = int(A.split(".")[0])*100 + int(A.split(".")[1])
B = int(B.split(".")[0])*100 + int(B.split(".")[1])
cnt=0
for i in range(0,S//A+1):
    if (S- i*A)% B == 0:
        cnt+=1
        print(i, (S-i*A)//B)
if cnt ==0:
    print("none")