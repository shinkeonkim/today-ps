M=1000000007
d=[1,0,1]
for i in range(3, 110):
  d.append(((i-1) * (d[-1] + d[-2])) % M)

def nCr(n, k):
  ret = 1
  for i in range(n, n-k, -1):
    ret *= i
  for i in range(1, k+1):
    ret //= i
  return ret

n = int(input())
k = n % 4
print((d[n - k] * nCr(n, k)) % M)
