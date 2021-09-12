input();L=list(map(int,input().split()));print(['NIE','TAK'][3 in [len(set(L[i:i+3]))for i in range(0,len(L)-2)]])
