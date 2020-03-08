for t in range(int(input())):
    k = 0
    ans = ""
    S = set()
    a = input()

    for i in a:
        if i == " ":
            continue
        cnt = a.count(i)

        if k<cnt:
            S.clear()
            S.add(i)
            k = cnt
            ans = i
        elif k == cnt and ans != i:
            S.add(i)

    if len(S) > 1:
        print("?")
    else:
        print(ans)
