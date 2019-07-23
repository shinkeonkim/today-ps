K=float(input())
D1,D2=list(map(float,input().split()))
print("%.6f"%(K*K - ((D1-D2)/2)*((D1-D2)/2) ))