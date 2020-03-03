# 입력
S,K = map(int,input().split())
# 분배할 숫자를 저장할 리스트
L = [0]*K
# N//K 만큼을 분배함.
for i in range(K):
    L[i] += S//K
# N%K, N//K 결과의 나머지를 균등하게 분배함.
for i in range(S%K):
    L[i] +=1
# 리스트안에 모든 값을 곱함.
ret =1
for i in range(K):
    ret*=L[i]
print(ret)