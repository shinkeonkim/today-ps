# 문제 번호: 9366 문제 이름: 삼각형 분류
# 문제 최초 시도: 2019_05_12
# 문제 풀이 완료: 2019_05_12
# 이 코드의 접근법: 구현, 수학

for t in range(1,int(input())+1):
    L=list(map(int,input().split()))
    L.sort()
    print("Case #",end="")
    print(t,end=": ")
    if(L[2]>=L[0]+L[1]):
        print("invalid!")
    else:
        if(L[0]==L[1]==L[2]):
            print("equilateral")
        elif(L[0]==L[1] or L[1]==L[2]):
            print("isosceles")
        else:
            print("scalene")