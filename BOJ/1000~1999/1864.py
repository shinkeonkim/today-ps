K={"-":0, "\\":1, "(":2,"@":3,"?":4,">":5,"&":6,"%":7,"/":-1}
while True:
    a=input()
    if a=='#':
        break
    S=0
    for i in range(len(a)):
        S+=K[a[i]]*(8**(len(a)-i-1))
    print(S)