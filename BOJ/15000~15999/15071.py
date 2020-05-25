a = input()
b = input()
for i in range(len(a)):
    k = ord(a[i]) -65
    k2 = ord(b[i]) - 65
    b+=chr((k - k2 + 26)%26 + 65)
    print(end = chr((k - k2 + 26)%26 + 65))