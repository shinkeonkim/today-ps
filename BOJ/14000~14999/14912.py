n,k = input().split()
print(sum([str(i).count(k) for i in range(1,int(n)+1)]))