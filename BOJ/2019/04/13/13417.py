# 문제 번호: 13417 문제 이름: 문자가 몇갤까 
# 문제 최초 시도: 2019_04_13
# 문제 풀이 완료: 2019_04_13
# 이 코드의 접근법: 구현

while 1:
    L=input()
    if L=="#":
        break
    Cnt=0
    for j in range(ord('a'),ord('z')+1):
        check=0
        for i in L:
            if(ord(i)==j or ord(i)==j-32):
                check=1

        if check==1:
            Cnt+=1
    print(Cnt)
        

    