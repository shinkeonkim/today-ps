#a + b = S
#a - b = K

S,K = list(map(int,input().split()))

if (S+K)%2 ==0 and (S-K)%2==0 and S>=K:
    print((S+K)//2,(S-K)//2)
else:
    print(-1)