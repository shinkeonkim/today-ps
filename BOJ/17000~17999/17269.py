a_list = [3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1]
a=input()
A,B=list(map(list,input().split()))
a=""
cnt = 0
while len(A)>cnt or len(B)>cnt:
    if len(A)>cnt:
        a += A[cnt]
    if len(B)>cnt:
        a += B[cnt]
    cnt+=1

k1 = []
k2 = []

for i in a:
    k1.append(a_list[ord(i)-65])

while len(k1) > 2:
    k2=[]
    for i in range(0,len(k1)-1):
        k2.append((k1[i]+k1[i+1])%10)
    k1 = k2[:]

S=0
for i in k1:
    S*=10
    S+=i
print(str(S)+"%")