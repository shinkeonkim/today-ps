X,Y,W,S=list(map(int,input().split()))
if 2*W > S:
  left = max(X,Y)-min(X,Y) 
  print(min(X,Y)*S +(left//2*2)*min(W, S)+(left % 2)*W)
else:
  print((X+Y)*W)
