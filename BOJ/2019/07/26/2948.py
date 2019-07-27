b,a=list(map(int,input().split()))
month =[0,31,28,31,30,31,30,31,31,30,31,30,31]
day = ["Sunday","Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
S = 3
for i in range(1,a):
    S+=month[i]
S +=b
print(day[S%7])