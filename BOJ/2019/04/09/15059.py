# 문제 번호: 15059 문제 이름: Hard choice 
# 문제 최초 시도: 2019_04_09
# 문제 풀이 완료: 2019_04_09
# 이 코드의 접근법: 구현

L1=list(map(int,input().split()))
L2=list(map(int,input().split()))
S=0
for i in range(3):
   S+= L2[i]-L1[i] if L2[i]>L1[i] else 0
print(S) 