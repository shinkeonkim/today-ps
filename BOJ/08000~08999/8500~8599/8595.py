import re
input()
print(sum([int(i) for i in re.split(r'[a-zA-Z]+',input()) if i != ''])
