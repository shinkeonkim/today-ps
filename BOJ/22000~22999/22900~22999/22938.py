x,y,r=map(int,input().split())
x2,y2,r2=map(int,input().split())
print("YES" if (x-x2)*(x-x2)+(y-y2)*(y-y2) < r*r+r2*r2+2*r*r2 else "NO")
