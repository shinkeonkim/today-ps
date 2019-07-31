while True:
    n = int(input())
    if n is 0:
        break
    k=0
    for i in range(n):
        a = input()
        if len(a) < k:
            continue
        
        for j in range(k, len(a)):
            if a[j] == " ":
                k = j
                break
        else:
            k = len(a)
    print(k+1)