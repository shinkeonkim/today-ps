a=input()
b=input()
K="1234567890"
for i in K:
    a = a.replace(i,"")
if b in a:
    print(1)
else:
    print(0)
