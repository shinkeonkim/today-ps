# 문제 번호: 3449 문제 이름: 해밍 거리
# 문제 최초 시도: 2019_06_27
# 문제 풀이 완료: 2019_06_27
# 이 코드의 접근법: 구현이지만 괜히 클래스 써봄

class Hamming:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def __str__(self):
        cnt = 0
        for i in range(len(self.a)):
            if a[i] != b[i]:
                cnt+=1
        return "Hamming distance is {}.".format(cnt)

if __name__ == "__main__":
    for i in range(int(input())):
        a=input()
        b=input()
        C= Hamming(a,b)
        print(C)