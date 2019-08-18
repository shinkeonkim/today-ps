# 문제 번호: 10936 문제 이름: BASE64 디코딩 
# 문제 최초 시도: 2019_04_02
# 문제 풀이 완료: 2019_04_02
# 이 코드의 접근법: 디코딩/인코딩

import base64
a=input().encode('utf-8')
b=str(base64.decodebytes(a))
print(b[2:-1])