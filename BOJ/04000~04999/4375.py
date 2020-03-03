while True:
    a = 0
    try:
        a = int(input())
    except:
        break
    k = 1
    c = 0
    while(k % a !=0):
        k*=10
        k+=1
        k%=a
        c+=1
    print(c+1)