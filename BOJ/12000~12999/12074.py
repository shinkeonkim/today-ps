s = "0"
while(len(s) <= 100000):
    k = s[::-1]
    r = ""
    for i in k:
        if i =='0':
            r+='1'
        else:
            r+='0'
    s = s+'0'+r

for t in range(int(input())):
    print("Case #{}: {}".format(t+1,s[int(input())-1]))