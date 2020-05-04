L = [i for i in range(30)]
L[0]=-1
L[1]=-1
k = [1]
for i in range(2,30):
    if L[i] == i:
        k.append(i)
        for j in range(i+i,30,i):
            L[j] = -1

z = [k[0]]
for i in k[1:]:
    z.append(z[-1]*i)
z.reverse()
k.reverse()
while True:
    ans = []
    a = int(input())
    b = a
    if a == 0:
        break
    ans = []
    for i in range(len(z)):
        if a >=z[i]:
            ans.append((i,a//z[i]))
            a %=z[i]

    answer = []
    for i in range(len(ans)):
        answer.append(str(ans[i][1]))
        if ans[i][0]!=10:
            for t in range(9,ans[i][0]-1,-1):
                answer[-1] += ("*{}".format(k[t]))
    answer.reverse()
    print(str(b) + " = " + " + ".join(answer))