s = input()
L = []
for i in s:
    if i in "+-*/":
        b = L[-1]
        L.pop()
        a = L[-1]
        L.pop()
        if i == "+":
            L.append(a+b)
        if i == "-":
            L.append(a-b)
        if i == "*":
            L.append(a*b)
        if i == "/":
            L.append(a//b)
    else:
        L.append(int(i))
print(L[0])