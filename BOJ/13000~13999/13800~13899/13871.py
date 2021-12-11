N, C, S, *l = map(int, open(0).read().split())
c = 0
S -= 1

ans = 0
for i in l:
  ans += c == S
  c = (c+i+N)%N
ans += c == S

print(ans)