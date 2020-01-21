while True:
    try:
        a=input()
    except:
        break
    
    while "BUG" in a:
        a=a.replace("BUG","")
    
    print(a)