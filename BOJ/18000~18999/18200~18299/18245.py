t = 2
while True:
    a = input()
    if a == "Was it a cat I saw?":
        break
    print(a[::t])
    t+=1