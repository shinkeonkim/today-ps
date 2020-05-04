while True:
    a,b = input().split()
    if a == b == '0':
        break
    a = a[::-1]
    b = b[::-1]
    c = 0
    ans = 0
    for i in range(min(len(a),len(b))):
        if int(a[i]) + int(b[i]) + c >= 10:
            ans +=1
            c = (int(a[i]) + int(b[i]) + c) // 10
    for i in range(min(len(a),len(b)),len(a)):
        if c + int(a[i]) >=10:
            ans+=1
            c = (c+int(a[i]))//10

    for i in range(min(len(a),len(b)),len(b)):
        if c + int(b[i]) >=10:
            ans+=1
            c = (c+int(b[i]))//10
    print(ans)