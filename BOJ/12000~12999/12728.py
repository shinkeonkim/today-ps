import math

L = [0,6,28]
loop = 1
loop_start = 1
zzzz= False

for i in range(3,2500):
    L.append((L[i-1]*6 - L[i-2]*4+100000) % 1000)
    if i>10:
        for j in range(3,i-2):
            if L[i] == L[j] and L[i-1] == L[j-1] and L[i-2] == L[j-2] and zzzz == False:
                # print(i,j)
                loop = i-j
                loop_start = j
                zzzz = True
# print(loop_start,loop)

for t in range(1,int(input())+1):
    n = int(input())
    if n <=500:
        print("Case #%d: %03d" %(t,L[n]-1))
    else:
        print("Case #%d: %03d" %(t,L[loop_start+ (n-loop_start)%loop]-1))