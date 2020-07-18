for i in range(1,int(input())+1):
    a,b = map(int,input().split())

    if a<=b:
        print("Data Set {}:\nno drought".format(i))
    elif a<=5*b:
        print("Data Set {}:\ndrought".format(i))
    else:
        cnt = 1
        k = 5
        while b * k * 5 <a:
            k*=5
            cnt+=1
        print("Data Set {}:\n{}drought".format(i,"mega "*cnt))
    print()