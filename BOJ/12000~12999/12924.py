a, b = map(int,input().split())
ans = set()
for i in range(a, b+1):
    k = str(i)
    for j in range(1,len(k)): 
        new = int(k[j:] + k[:j])
        if a <= new <= b and len(k) == len(str(new)) and i != new:
            ans.add((min(i,new),max(i,new)))
print(len(ans))