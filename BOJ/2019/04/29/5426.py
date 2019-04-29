# 문제 번호: 5426 문제 이름: 비밀 편지
# 문제 최초 시도: 2019_04_29
# 문제 풀이 완료: 2019_04_29
# 이 코드의 접근법: 이차원 배열, 구현

import math
for i in range(int(input())):
    a=input()
    N=int(math.sqrt(len(a)))
    for i in range(N-1,-1,-1):
        for j in range(0,N):
            print(a[i+N*j],end="")
    print()