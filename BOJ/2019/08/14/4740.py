while True:
    a=input()
    if a == '***':
        break
    a=list(a)
    a.reverse()
    print("".join(a))