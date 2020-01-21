n = int(input())
L = [int(input()) for i in range(n)]
minus = sorted([i for i in L if i <0]) 
plus = sorted([i for i in L if i>0],reverse = True)
zero = L.count(0)

S = 0
for i in range(0,len(plus),2):
    try:
        if plus[i]+plus[i+1] < plus[i]*plus[i+1]:
            S += plus[i]*plus[i+1]
        else:
            S += plus[i] + plus[i+1]
    except:
        S += plus[i]

for i in range(0,len(minus),2):
    try:
        S += minus[i] * minus[i+1]
    except:
        if zero > 0:
            zero -= 1
        else:
            S += minus[i]

print(S)
