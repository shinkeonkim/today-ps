# 문제 번호: 10569 문제 이름: 다면체  
# 문제 최초 시도: 2019_04_03
# 문제 풀이 완료: 2019_04_03
# 이 코드의 접근법: 구현

for i in range(int(input())):
    V,E=map(int,input().split())
    print(2-V+E)