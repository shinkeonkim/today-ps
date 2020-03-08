import re
p= "^([A-F]{0,1})A+F+C+$([A-F]{0,1})"
for i in range(int(input())):  
    s = input()
    if re.match(p,s) != None:
        print("Infected!")
    else:
        print("Good")
