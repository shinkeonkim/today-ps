bann = []
sentence = []
while True:
    a=input()
    if a== "##":
        break
    bann.append(a)

while True:
    a=input()
    if a== "#":
        break
    sentence.append(a)
for i in sentence:
    i_list = list(i)
    j=0
    while j <len(i)-3:

        check = False

        for x in bann:
            if i[j]==x[0] and i[j+3] == x[1] and ord('a') <= ord(i[j+1].lower()) <= ord('z') and ord('a') <= ord(i[j+2].lower()) <= ord('z'):
                check=True
        
        if check:
            i_list[j+1],i_list[j+2] = "*","*"
            j+=3
        j+=1
    for ii in i_list:
        print(ii,end="")
    print()