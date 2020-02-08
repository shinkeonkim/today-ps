L = sorted([int(input()) for i in range(int(input()))])
print("%.1f" % (min([L[i+1]-L[i-1] for i in range(1,len(L)-1)])/2))