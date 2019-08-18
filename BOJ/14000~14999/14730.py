# 문제 번호: 14730 문제 이름: 謎紛芥索紀 (Small) 
# 문제 최초 시도: 2019_04_01
# 문제 풀이 완료: 2019_04_01
# 이 코드의 접근법: 구현

S=0
for i in range(int(input())):
    a,b=map(int,input().split(" "))
    S+=a*b
print(S)