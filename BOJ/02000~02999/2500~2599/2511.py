a=b=0
last_win=0
A=list(map(int,input().split()))
B=list(map(int,input().split()))
for i in range(10):
    if A[i] > B[i]:
        a+=3
        last_win = 1
    elif A[i] < B[i]:
        b+=3
        last_win = 2
    else:
        a+=1
        b+=1
print(a,b)
if a>b:
    print("A")
elif b>a:
    print("B")
else:
    print("DAB"[last_win])