input()
l = [*map(int,input().split())]
print(max([l.count(i) for i in l]))
