for t in range(1,int(input())+1):
    a = input()
    b = input()
    a = a.lower()
    b = b.lower()
    L = ((",",";"),("{","("),("}",")"),("[","("),("]",")"))
    a = a.strip(" ")
    b = b.strip(" ")
    for i in L:
        a = a.replace(i[0],i[1])
        b = b.replace(i[0],i[1])
    while "  " in a:
        a=a.replace("  "," ")
    while "  " in b:
        b=b.replace("  "," ")

    A = a.split(" ")
    B = b.split(" ")
    
    if len(A) != len(B):
        print("Data Set {}: not equal".format(t))
    else:
        for i in range(len(A)):
            if(A[i]!=B[i]):
                print("Data Set {}: not equal".format(t))
                break
        else:
            print("Data Set {}: equal".format(t))       
    print() 