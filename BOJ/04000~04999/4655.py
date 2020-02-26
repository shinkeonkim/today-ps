while True:
    a = input()
    if a == "0.00":
        break
    k = 0
    c = 2
    a = float(a)
    while k < a:
        k += 1/c
        c+=1
    print(c-2,"card(s)")