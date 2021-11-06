def is_prime(n):
  n = int(n)
  for i in range(2, n):
    if n % i == 0:
      return False
  return True

a, b = input().split()

print("Yes" if is_prime(a) and is_prime(b+a) else "No") 