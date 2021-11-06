n = int(input())
height = sorted([int(input()) for i in range(n)])
cost = [0]*n

l = 0 # 왼쪽 구간은 오른쪽 끝만 알고 있으면 된다.
r = n-1 # 오른쪽 구간은 왼쪽 끝만 알고 있으면 된다.

# 초기 왼쪽 구간을 설정한다.
for i in range(n):
  if height[i] == height[0]:
    l = i

# 초기 오른쪽 구간을 설정한다.
for i in range(n-1, -1, -1):
  if height[i] == height[-1]:
    r = i


while l < r and height[r] - height[l] > 17:
  l_cost = 0
  r_cost = 0

  # 왼쪽 구간을 증가시킴으로서 발생하는 비용 측정
  for i in range(l+1):
    l_cost += (cost[i]+ 1)**2 - cost[i]**2

  # 오른쪽 구간을 감소시킴으로서 발생하는 비용 측정  
  for i in range(n-1, r-1, -1):
    r_cost += (cost[i]+1)**2 - cost[i]**2

  if l_cost < r_cost:
    # 왼쪽 구간의 비용이 작은 경우 증가 액션 수행
    for i in range(l+1):
      cost[i] += 1
      height[i] += 1
  else:
    # 오른쪽 구간의 비용이 작은 경우 감소 액션 수행
    for i in range(n-1, r-1, -1):
      cost[i] += 1
      height[i] -= 1

  # 숫자를 증가시킴으로서, 구간이 확장되어야 하는지 검사
  for i in range(n):
    if height[i] == height[0]:
      l = i
  
  # 숫자를 감소시킴으로서, 구간이 확장되어야 하는지 검사
  for i in range(n-1, -1, -1):
    if height[i] == height[-1]:
      r = i

print(sum([i*i for i in cost]))