import sys
for i in range(int(sys.stdin.readline())):
    a = int(sys.stdin.readline())
    cnt = 0
    for j in range(2,a+1):
        aa = a
        while aa%j == 0 :
            cnt+=1
            aa//=j

    print(cnt)
