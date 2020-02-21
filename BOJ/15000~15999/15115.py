K,P,X = map(int,input().split())
Min = 98765432112312
for i in range(1,K*1000):
    D = K / i
    # if K%i !=0:
    #     D+=1
    Min = min(Min,X*i + D*P)
    # print(X*i + D*P)
print("%.3f" % Min)