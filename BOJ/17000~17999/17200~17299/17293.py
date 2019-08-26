s = """{} bottle{} of beer on the wall, {} bottle{} of beer.
Take one down and pass it around, {} bottle{} of beer on the wall.\n"""
n= int(input())
for i in range(n,0,-1):
    if i == 1:
        print(s.format(1,"",1,"","no more","s"))
    elif i == 2:
        print(s.format(i,"s",i,"s",i-1,""))
    else:
        print(s.format(i,"s",i,"s",i-1,"s"))
if n ==1:
    k=""
else:
    k="s"
print("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, {} bottle{} of beer on the wall.".format(n,k))