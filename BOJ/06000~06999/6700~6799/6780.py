L=[int(input()),int(input())]
while L[-2]>=L[-1]: L.append(L[-2]-L[-1])
print(len(L))