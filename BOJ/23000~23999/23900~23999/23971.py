h,w,n,m=map(int,input().split())
print((h//(n+1)+(h%(n+1)>0))*(w//(m+1)+(w%(m+1)>0)))