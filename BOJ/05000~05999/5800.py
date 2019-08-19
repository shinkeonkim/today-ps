# 문제 번호:5800 문제 이름: 성적 통계
# 문제 최초 시도: 2019_03_28
# 문제 풀이 완료: 2019_03_28
# 이 코드의 접근법: 정렬

for i in range(0,int(input())):
    L=list(map(int,input().split()))
    A=L[0]
    L=L[1:]
    Max=0
    L.sort()
    print("Class",i+1)
    for k in range(0,A-1):
        if(Max<L[k+1]-L[k]): Max=L[k+1]-L[k]
    print("Max {}, Min {}, Largest gap {}".format(L[A-1],L[0],Max))