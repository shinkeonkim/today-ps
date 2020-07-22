K = int(input())
A, B = map(int,input().split())

for i in range(min(A,B),max(A,B)+1):
    if i%K == 0:
        print("OK")
        break
else:
    print("NG")