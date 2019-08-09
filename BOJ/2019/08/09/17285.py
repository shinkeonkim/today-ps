T=input()
X="CHICKENS"
key = -1
for i in range(1000):
    for j in range(8):
        if ord(X[j]) != ord(T[j]) ^ i: 
            break
    else:
        key=i
        break
for i in range(len(T)):
    print(chr(ord(T[i])^key),end="")