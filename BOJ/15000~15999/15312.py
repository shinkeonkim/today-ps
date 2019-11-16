L = [3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1]
A = input()
B = input()
K = []
a = 0
b = 0
while a<len(A) and b <len(B):
    K.append(L[ord(A[a])-65])
    K.append(L[ord(B[b])-65])
    a+=1
    b+=1
while a<len(A):
    K.append(K[ord(A[a])-65])
    a+=1
while b<len(B):
    K.append(K[ord(B[b])-65])
    b+=1

while len(K) > 2:
    K2 = []
    #print(K)
    for i in range(1,len(K)):
        K2.append((K[i-1]+K[i])%10)
    K = K2[:]
print("%02d" % (K[0]*10+K[1]))


