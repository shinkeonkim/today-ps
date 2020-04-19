A = "aiyeou"
B = "bkxznhdcwgpvjqtsrlmf"
a = ""
while True:
    try:
        I = input()
    except:
        break
    else:
        a+=I
        a+="\n"
b = a.lower()
L = []
for i in b:
    if i in A:
        k = A.index(i)
        L.append(A[(k+3)%6])
    elif i in B:
        k = B.index(i)
        L.append(B[(k+10)%20])
    else:
        L.append(i)
for i in range(len(L)):
    if a[i] == b[i]:
        print(L[i],end="")
    else:
        print(L[i].upper(),end="")