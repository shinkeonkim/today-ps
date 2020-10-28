# 문제 번호: 13900 문제 이름: 순서쌍 곱의 합
# 문제 접근: (전체 합-현재 요소)*현재 요소를 누적합해주고 전체합에서 현재 요소를 빼기(중복 케이스를 제거 하기위해)

n=input() # N입력
n=int(n)
L=list(map(int,input().split(" "))) # N개의 숫자 입력
S=0 # S, ans를 0으로 초기화
ans=0
for i in L: # S에 모든 요소합 넣기
    S+=i

for i in L: # ans 계산
    ans+=(S-i)*i
    S-=i
print(ans) # ans 출력
