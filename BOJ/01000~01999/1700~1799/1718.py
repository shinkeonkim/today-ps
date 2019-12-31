s = input()
l = input()
for i in range(len(s)):
    k = ord(l[i%len(l)]) - 96
    if s[i] != " ":
        print(chr(((ord(s[i])-97-k+26)%26)+97),end = "")
    else:
        print(end = " ")