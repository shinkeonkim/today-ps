a,b = map(int,input().split())
l = [i for i in range(1, a+1) if i%10 != b%10 and i%10 != 2*b%10]
print(len(l))
print(*l)