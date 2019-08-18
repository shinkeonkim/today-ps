for _ in range(int(input())):
    a=int(input())
    print("Pairs for {}:".format(a),end=" ")
    cnt = 0
    for i in range(1,a//2+1):
        if i >= a-i:
            continue
        if cnt !=0:
            print(end=", ")
        cnt+=1
        print(i,a-i,end="")
    print()