# 문제 번호: 14626 문제 이름: ISBN 
# 문제 최초 시도: 2019_04_01
# 문제 풀이 완료: 2019_04_01
# 이 코드의 접근법: 구현
a=list(input())
b=-1
Cnt=0
for i in a:
    if(i=='*'): b=Cnt
    Cnt+=1

S=0
Cnt=0
for i in a:
    if(i!='*'):
        if(Cnt%2==0):
            S+=int(i)
        else:
            S+=int(i)*3
    Cnt+=1
for i in range(0,10):
    if(b%2==0):
        if((S+i)%10==0):
            print(i)
            break
    else:
        if((S+i*3)%10==0):
            print(i)
            break