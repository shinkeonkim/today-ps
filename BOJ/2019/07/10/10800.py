import sys
total=0
sub_total=0
sub_num=0
S=[0]*220000
D=[]
ar=[]

N=int(sys.stdin.readline())
for i in range(N):
    color,cnt=list(map(int,sys.stdin.readline().split()))
    ar.append([i,color,cnt])
ar.sort(key=lambda t: t[1])
ar.sort(key=lambda t : t[2])

sub_total+=ar[0][2]
S[ar[0][1]]+=ar[0][2]
D.append([ar[0][0],0])

for i in range(1,N):
    if ar[i][2] > ar[i-1][2]:
        total += sub_total + sub_num
        sub_total=0
        sub_num=0
        sub_total += ar[i][2]
        D.append([ar[i][0], total - S[ar[i][1]]])
        S[ar[i][1]] += ar[i][2]
    elif ar[i][2] == ar[i-1][2] and ar[i][1] ==ar[i-1][1]:
        sub_num +=ar[i][2]
        sub_total += ar[i][2]
        D.append([ar[i][0], total])
        S[ar[i][1]] += ar[i][2]
    else:
        total += sub_num
        sub_total += ar[i][2]
        D.append([ar[i][0], total - S[ar[i][1]]])
        S[ar[i][1]] += ar[i][2]

D.sort(key=lambda t : t[0])

for i in D:
    print(i[1])