s = sum([1 if input() == 'W' else 0 for _ in range(6)])
for i in [[[5,6],1],[[3,4],2],[[1,2],3],[[0],-1]]:
    if s in i[0]:
        print(i[1])