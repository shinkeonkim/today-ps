for t in range(int(input())):
    n = int(input())
    L = [list(map(float,input().split())) for i in range(n)]
    X = max(i[0] for i in L) - min([i[0] for i in L])
    Y = max(i[1] for i in L) - min([i[1] for i in L])
    print("Case %d: Area %.10f, Perimeter %.10f" %(t+1,X*Y,2*X+2*Y))