input()
l = [i for i,j in enumerate(input()) if j =='.']

ans = 11111111
for i in range(len(l)-1):
  ans = min(ans, l[i+1] - l[i])
print(ans - 1)