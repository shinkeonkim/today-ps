from sys import stdin
lines = stdin.readlines()
for i in lines:
    i = i.lower()
    if 'problem' in i:
        print("yes")
    else:
        print("no")