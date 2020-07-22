import re
s = input()
regex = re.compile("(100+1+|01)+")
ret = regex.fullmatch(s)
try:
    if ret != None:
        print("SUBMARINE")
    else:
        print("NOISE")
except:
    print("NOISE")
