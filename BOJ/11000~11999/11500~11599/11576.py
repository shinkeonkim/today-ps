# 문제 번호: 11576 문제 이름: Base Conversion
# 문제 최초 시도: 2019_05_11
# 문제 풀이 완료: 2019_05_11
# 이 코드의 접근법: 진법, 수학 

A,B=map(int,input().split())
n=int(input())
L=list(map(int,input().split()))

S=0
k=[]
for i in range(n):
    S+=L[i]*(A**(n-i-1))

while(S>0):
    k.append(S%B)
    S//=B

for i in range(len(k)-1,-1,-1):
    print(k[i],end=" ")