for i in range(int(input())):
    a,b=input().split()
    b=int(b)
    K = ["A+","A","B+","B","C+","C","D+","D"]
    L = [96,89,86,79,76,69,66,59]
    for i,j in enumerate(L):
        if b>j:
            print(a,K[i])
            break
    else:
        print(a,"F")