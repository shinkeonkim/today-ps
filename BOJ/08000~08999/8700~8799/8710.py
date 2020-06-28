a,b,c=map(int,input().split())
print((b-a) // c  if (b-a) % c == 0 else (b-a) // c +1)