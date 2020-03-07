import sys
n = int(sys.stdin.readline())
for t in range(n):
    a = list(sys.stdin.readline())
    b = list(sys.stdin.readline())
    a.sort()
    b.sort()
    cnt = 0
    i,j = 0,0
    while i < len(a) and j < len(b):
        if a[i] == b[j]:
            i+=1
            j+=1
            cnt+=1
        elif a[i] < b[j]:
            i+=1
        else:
            j+=1
    print("Case #{}: {}".format(t+1,len(a)+len(b)-2*cnt))