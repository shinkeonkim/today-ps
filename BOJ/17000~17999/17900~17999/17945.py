b,c = map(int,input().split())

if b*b - c == 0:
    print(-b)    
else:
    A =(-b + int((b*b - c)**(1/2)))
    B = (-b - int((b*b - c)**(1/2)))
    print(min(A,B),max(A,B))