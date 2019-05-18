# 문제 번호: 14583 문제 이름: 이음줄
# 문제 최초 시도: 2019_05_18
# 문제 풀이 완료: 2019_05_18
# 이 코드의 접근법: 구현, 수학

import math as m
H,V=map(float,input().split())
a= H*V/(H+m.sqrt(H**2+V**2))
row=m.sqrt(H**2+a**2)/2
S=H*(V-a)
column=S/2/row
print("%.2f %.2f" %(row,column))