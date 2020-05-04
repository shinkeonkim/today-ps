a=input()
C = 0
Cl = ['C','F','G']
A = 0
Al = ['A','D','E']
L = a.split('|')
lastA,lastC = 0,0

for i in L:
    if i[0] in Cl:
        C += 1
    if i[0] in Al:
        A += 1
    if i[-1] in Cl:
        lastC += 1
    if i[-1] in Al:
        lastA += 1

#print(A,C,lastA,lastC)
if A > C:
    print("A-minor")
elif A < C:
    print("C-major")
else:
    #if lastC > lastA:
    if i[-1][-1] in Cl:
        print("C-major")
    #elif lastA > lastC:
    else:
        print("A-minor")
