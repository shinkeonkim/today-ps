for t in range(int(input())):
    n = int(input())
    S =[input() for i in range(n)]
    cnt = 0
    for i in range(n-1):
        if S[i] > S[i+1]:
            cnt+=1
            S = sorted(S[0:(i+2)]) + S[i+2:]
    print("Case #{}: {}".format(t+1,cnt))