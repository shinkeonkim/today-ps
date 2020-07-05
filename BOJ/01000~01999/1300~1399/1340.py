def f(y):
    return y % 400 == 0 or (y % 4 == 0 and y%100 != 0)

M = ["","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
D = [0,31,28,31,30,31,30,31,31,30,31,30,31]

s = input().split(" ")
s[0] = M.index(s[0])
s[1] = int(s[1][:-1])
s[2] = int(s[2])
s[3] = list(map(int,s[3].split(":")))
s[3] = s[3][0]* 60 + s[3][1]

total = sum(D) * 24  * 60 + (24*60 if(f(s[2])) else 0)
t = 0

for m in range(s[0]):
    if m == 2 and f(s[2]):
        t += 24*60
    t += D[m] * 24 * 60
t += (s[1] - 1) * 24 * 60 + s[3]

print("%.12f" % (t*100/total))
