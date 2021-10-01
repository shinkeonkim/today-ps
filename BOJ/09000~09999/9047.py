for _ in range(int(input())):
  n = int(input())
  ans = 0

  while True:
    if n == 6174:
      break

    mx = int(''.join(sorted(list(str(n)+'0'*(4-len(str(n)))), reverse=True)))
    mn = int(''.join(sorted(list(str(n)))))

    n = mx - mn
    ans += 1

  print(ans)
