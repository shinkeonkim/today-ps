while True:
    a=list(map(int,input().split()))
    if a==[0]:
        break
    a=a[1:]
    S=a[0]-a[1]
    for i in range(2,len(a),2):
        S*=a[i]
        S-=a[i+1]
    print(S)
    