n = int(input())
L = [*map(int, input().split())]
s = int(input())

cur_idx = 0

while s > 0 and cur_idx < n:
  cur_item = L[cur_idx]
  max_item_idx = cur_idx
  max_item = L[cur_idx]

  for i in range(cur_idx, min(cur_idx + s + 1, n)):
    if cur_item < L[i] and max_item < L[i]:
      max_item = L[i]
      max_item_idx = i

  cost = max(0, max_item_idx - cur_idx)
  if cost <= s:
    if cur_idx != max_item_idx:
      s -= cost
      L = L[:(cur_idx)] + [L[max_item_idx]] + L[cur_idx:max_item_idx] + L[(max_item_idx+1):]

  cur_idx += 1

print(*L)