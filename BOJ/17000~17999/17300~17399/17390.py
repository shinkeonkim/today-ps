import sys
n,m=map(int,sys.stdin.readline().split())
L = sorted(list(map(int,sys.stdin.readline().split())))
S = [0,L[0]]
for i in L[1:]:
    S.append(S[-1]+i)
for i in range(m):
    a,b=map(int,sys.stdin.readline().split())
    sys.stdout.write(str(S[b]-S[a-1])+"\n")