# 문제 번호: 13235 문제 이름: 팰린드롬 (Palindromes) 
# 문제 최초 시도: 2019_04_05
# 문제 풀이 완료: 2019_04_05
# 이 코드의 접근법: 구현

a=list(input())
b=a[:]
b.reverse()
if(a==b):
    print("true")
else:
    print("false")