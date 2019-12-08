L = [list(map(int,input().split())) for _ in range(3)]
cost = [(L[i][1]/L[i][0]) if L[i][0]*10 < 5000 else (L[i][1]*10)/(L[i][0]*10-500) for i in range(3)]
print("SNU"[cost.index(max(cost))])