L=[0]*5
for i in range(int(input())):
    a,b=list(map(int,input().split()))
    if a==0 or b==0:
        L[0]+=1
    elif a>0:
        if b>0:
            L[1]+=1
        else:
            L[4]+=1
    else:
        if b>0:
            L[2]+=1
        else:
            L[3]+=1
for i in range(1,5):
    print("Q{}: {}".format(i,L[i]))
print("AXIS:",L[0])