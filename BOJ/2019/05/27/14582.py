# 문제 번호: 14582 문제 이름: 오늘도 졌다
# 문제 최초 시도: 2019_05_27
# 문제 풀이 완료: 2019_05_27
# 이 코드의 접근법: 구현

S1=0
S2=0
check = False

def f():
    global S1,S2,check
    if(S1>S2):
        check=True

A=list(map(int,input().split()))
B=list(map(int,input().split()))
for i in range(0,9):
    S1+=A[i]
    f()
    S2+=B[i]
    f()

if(check):
    print("Yes")
else:
    print("No")
