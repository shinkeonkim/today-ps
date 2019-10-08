s = 0
n = 0
dic = {"A+":43,"A0":40,"A-": 37,"B+":33,"B0":30,"B-": 27,"C+":23,"C0":20,"C-":17,"D+": 13,"D0":10,"D-": 7,"F":0}
for i in range(int(input())):
    a,b,c=input().split()
    b = int(b)
    s += b*dic[c]
    n += b
print("%.2f" %(s/(10*n)  + 0.000000000001))