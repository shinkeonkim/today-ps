# 문제 번호: 9295 문제 이름: 주사위
# 문제 최초 시도: 2019_05_17
# 문제 풀이 완료: 2019_05_17
# 이 코드의 접근법: 구현

for i in range(1,int(input())+1):
    a,b=map(int,input().split())
    print("Case {}: {}".format(i,a+b))