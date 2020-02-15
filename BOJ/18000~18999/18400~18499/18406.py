s=input()
if sum([int(i) for i in s[:len(s)//2]]) == sum([int(i) for i in s[len(s)//2:]]):
    print("LUCKY")
else:
    print("READY")