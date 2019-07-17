N,M,K=list(map(int,input().split()))
print(min(M,K)+min(N-M,N-K))