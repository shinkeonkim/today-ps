while True:
    a,b,c=input().split()
    if a=='#' and b == '0' and c == '0':
        break
    b = int(b)
    c = int(c)

    if b >17 or c>=80:
        print(a,"Senior")
    else:
        print(a,"Junior")
