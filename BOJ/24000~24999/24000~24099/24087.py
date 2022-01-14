s,a,b,*t=map(int,open(0).read().split())
t=max(s-a,0)
print((t//b+bool(t%b))*100+250)
