def get_prefix(l,r,D):
    if l == 0:
        return D[r]
    else:
        return D[r] -D[l-1]

S = list(map(int,list(input())))
D = [S[0]]
for i in range(1,len(S)):
    D.append(D[-1]+S[i])
Mx = 0
for ll in range(2,len(S)+1,2):
    for start in range(0,len(S)-ll+1):
        k = get_prefix(start,start+(ll//2)-1,D)
        k2 = get_prefix(start+(ll//2),start+ll-1,D)
        if k == k2:
            Mx = ll
print(Mx)