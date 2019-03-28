# 문제 번호:5361 문제 이름: 요다
# 문제 최초 시도: 2019_03_28
# 문제 풀이 완료: 2019_03_28
# 이 코드의 접근법: 구현 , 문자열

a=int(input())
for i in range(a):
    L=input().split()
    for i in range(2,len(L)):
        print(L[i],end=" ")
    print(L[0],L[1])