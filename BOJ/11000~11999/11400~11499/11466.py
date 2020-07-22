a,b = map(float,input().split())
ans = min(max(a,b)/3,min(a,b))
ans = max(ans, min(a,b)/2)

print(ans)