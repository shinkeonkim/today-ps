# 문제 번호: 7510 문제 이름: 고급수학
# 문제 최초 시도: 2019_03_19
# 문제 풀이 완료: 2019_03_19
# 이 코드의 접근법: MATH

n=int(input())
for i in range(0,n):
    L=list(map(int,input().split(" ")))
    L.sort()
    print("Scenario #{}:".format(i+1))
    if(L[2]**2==L[0]**2+L[1]**2):
        print("yes\n")
    else:
        print("no\n")
