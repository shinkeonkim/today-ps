# 문제 번호: 13420 문제 이름: 사칙연산 
# 문제 최초 시도: 2019_04_12
# 문제 풀이 완료: 2019_04_12
# 이 코드의 접근법: 구현

for i in range(int(input())):
    L=list(input().split())
    L[0]=int(L[0])
    L[2]=int(L[2])
    L[4]=int(L[4])
    c=False
    if(L[1]=='+'):
        if(L[0]+L[2]==L[4]):
            c=True
    if(L[1]=='-'):
        if(L[0]-L[2]==L[4]):
            c=True
    if(L[1]=='*'):
        if(L[0]*L[2]==L[4]):
            c=True
    if(L[1]=='/'):
        if(L[0]//L[2]==L[4]):
            c=True
    if(c):
        print("correct")
    else:
        print("wrong answer") 