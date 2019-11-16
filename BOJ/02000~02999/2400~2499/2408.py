n = int(input())
s = ""
for i in range(2*n-1):
    a = input()
    if a == "/":
        s+"//"
    else:
        s+=a
print(eval(s))