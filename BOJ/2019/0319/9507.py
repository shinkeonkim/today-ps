# 문제 번호: 9507 문제 이름: Generations of Tribbles
# 문제 최초 시도: 2019_03_19
# 문제 풀이 완료: 2019_03_19
# 이 코드의 접근법: DP
L={}

N=input()
N=int(N)

for k in range(0,N):
    a=input()
    a=int(a)

    L[0]=1
    L[1]=1
    L[2]=2
    L[3]=4

    for i in range (4,a+1):
        L[i]=L[i-1]+L[i-2]+L[i-3]+L[i-4]
    print(L[a])