for _ in range(int(input())):
    n,b = input().split()
    n = int(n)
    ans = True
    stk = 0
    for i in b:
        if i =='>':
            stk+=1
        else:
            if stk == 0:
                ans = False
            else:
                stk-=1
    if stk > 0:
        ans = False
    
    if ans:
        print("legal")
    else:
        print("illegal")
