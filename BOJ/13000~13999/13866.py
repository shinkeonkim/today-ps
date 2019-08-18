# 문제 번호: 13866 문제 이름: 팀 나누기 
# 문제 최초 시도: 2019_04_09
# 문제 풀이 완료: 2019_04_09
# 이 코드의 접근법: 구현

Min=987654321
A,B,C,D=map(int,input().split())
if(abs(A+B-C-D)<Min): Min=abs(A+B-C-D)
if(abs(A+C-B-D)<Min): Min=abs(A+C-B-D)
if(abs(A+D-B-C)<Min): Min=abs(A+D-B-C)
print(Min)