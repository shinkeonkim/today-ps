# 문제 번호: 16406 문제 이름: Exam
# 문제 최초 시도: 2019_05_04
# 문제 풀이 완료: 2019_05_04
# 이 코드의 접근법: 수학, 구현

n=int(input())
a=input()
b=input()
C=0
for i,j in enumerate(a):
    if(j==b[i]):
        C+=1
print( min(C,n)+min(len(a)-C,len(a)-n))