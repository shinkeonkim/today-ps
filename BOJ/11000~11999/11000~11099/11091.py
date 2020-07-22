for t in range(int(input())):
    a=set(input().lower())
    s=""
    for i in range(ord('a'),ord('z')+1):
        if chr(i) not in a:
            s+=chr(i)
    if s == "":
        print("pangram")
    else:
        print("missing",s)
