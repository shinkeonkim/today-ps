a = input()
d = {'A':0,'B':0}
for i in range(0,len(a),2):
    d[a[i]] += int(a[i+1])
if d['A'] > d['B']:
    print("A")
else:
    print("B")