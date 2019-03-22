# 문제 번호: 10768 문제 이름: 특별한 날
# 문제 최초 시도: 2019_03_22
# 문제 풀이 완료: 2019_03_22
# 이 코드의 접근법: 단순 구현

a=int(input())
b=int(input())

if(a==2 and b==18):
    print("Special")
elif(a==1 or(a==2 and b<18)):
    print("Before")
else:
    print("After")