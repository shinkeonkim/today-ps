N = int(input())
L = list(map(int, input().split()))
K = list(map(int,input().split()))
current = L[0]+K[0]
chk = True
for i in range(1,N-1):
    if current < L[i]:
        chk = False
    current = max(current, L[i] + K[i])
if current < L[-1]:
    chk = False
if chk:
    print("권병장님, 중대장님이 찾으십니다")
else:
    print("엄마 나 전역 늦어질 것 같아")