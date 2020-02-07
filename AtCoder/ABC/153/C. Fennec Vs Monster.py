N,K = map(int,input().split())
H = sorted(list(map(int,input().split())))
H.reverse()
print(sum(H[min(K,N):]))