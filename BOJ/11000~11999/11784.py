while True:
    try:
        a=input()
    except:
        break
    
    print(bytes.fromhex(a).decode('utf-8'))