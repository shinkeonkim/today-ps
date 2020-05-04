i = 1
while(True):
    L,P,V = map(int,input().split())
    if L+P+V == 0:
        break
    ans = (V//P)*L + min(L,V%P)
    print("Case {}: {}".format(i,ans))
    i+=1