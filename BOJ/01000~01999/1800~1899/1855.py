a=int(input())
S=input()
k = 0
s = ""
for i in range(0,len(S),a):
    if (i // a)% 2 == 0 :
        s += S[i:i+a]
    else:
        s+=S[i+a-1:i-1:-1]

for i in range(0,a):
    for j in range(i,len(s),a):
        print(end=s[j])
