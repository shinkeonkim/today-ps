# 문제 번호: 9325 문제 이름: 얼마?
# 문제 최초 시도: 2019_05_17
# 문제 풀이 완료: 2019_05_17
# 이 코드의 접근법: 구현

for i in range(1,int(input())+1):
    N=int(input())
    for j in range(1, int(input())+1):
        a,b=map(int,input().split())
        N+=a*b
    print(N)