direction = {"R":(1,0),"L":(-1,0),"B":(0,-1),"T":(0,1),"RT":(1,1),"LT":(-1,1),"RB":(1,-1),"LB":(-1,-1)}

king,rock,n = input().split()
n = int(n)
king = list(king)
rock = list(rock)
king[0] = ord(king[0])-64
rock[0] = ord(rock[0])-64
king[1] = int(king[1])
rock[1] = int(rock[1])
for i in range(n):
    # print(king,rock)
    d = direction[input()]
    if king[0] + d[0] < 1 or king[0] + d[0] > 8 or king[1] + d[1] < 1 or king[1] + d[1] > 8:
        continue

    if king[0] + d[0] == rock[0] and king[1] + d[1] == rock[1]:
        if rock[0] + d[0] < 1 or rock[0] + d[0] > 8 or rock[1] + d[1] < 1 or rock[1] + d[1] > 8:
            continue
        else:
            for j in range(2):
                rock[j]+=d[j]
                king[j]+=d[j]        
    else:
        for j in range(2):
            king[j] += d[j]
print("{}{}".format(chr(king[0]+64),king[1]))
print("{}{}".format(chr(rock[0]+64),rock[1]))