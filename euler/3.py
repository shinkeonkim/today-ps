import math
N = 600851475143
ans = 1
for i in range(2,int(math.sqrt(N))+1):
    if N % i == 0:
        for j in range(2,int(math.sqrt(i))+1):
            if i %j == 0:
                break
        else:
            ans = i
print(ans)  