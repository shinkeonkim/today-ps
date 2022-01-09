chk = [0,0,1]+[1]*6000
primes = []

for i in range(2, 5500):
  if chk[i]:
    primes.append(i)
    for j in range(2*i, 5500, i):
      chk[j] = 0

z = []

for i in range(len(primes)-1):
  z.append(primes[i]*primes[i+1])

n = int(input())
for i in z:
  if i > n:
    print(i)
    break
