# 문제 번호:5789 문제 이름: 한다 안한다
# 문제 최초 시도: 2019_03_28
# 문제 풀이 완료: 2019_03_28
# 이 코드의 접근법: 구현

for i in range(0,int(input())):
    L=input()
    if(L[len(L)//2-1] == L[len(L)//2]): print("Do-it")
    else: print("Do-it-Not")
