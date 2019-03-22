# 문제 번호: 1793 문제 이름: 타일링
# 문제 최초 시도: 2019_03_21
# 문제 풀이 완료: 2019_03_21
# 이 코드의 접근법: DP예제

D={}
D[0]=1
D[1]=1
D[2]=3
for i in range(2,330):
    D[i]=D[i-1]+2*D[i-2] 

while True:
    try: # 일단 n을 입력받으려고 try
        n=int(input())
        print(D[n])

    except EOFError: # EOF 반환시 종료
        break
