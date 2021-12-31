z=min([[*map(int,input().split())] for i in range(int(input()))], key=lambda t: (t[1]//t[0]))
print(z[1]//z[0])
