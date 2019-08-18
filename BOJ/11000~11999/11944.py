N,M=list(map(int,input().split()))
a=str(N)*N
print(a[:min(len(a),M)])