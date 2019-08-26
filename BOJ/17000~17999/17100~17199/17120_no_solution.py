k=[]
for i in range(3):
#while True:
    try:
        a=input()
    except:
        break
    k.append(a)

check = [True for i in range(len(k))]

check_three = False
three_s=(-1,-1)
three_e=(-1,-1)
remove_list = []

for num,i in enumerate(k):
    for j in range(len(i)):
        if j+2 <len(i):
            if not check_three and (i[j],i[j+1],i[j+2]) == ('`','`','`'):
                three_s=(num,j)
                check_three=True
            elif check_three and (i[j],i[j+1],i[j+2]) == ('`','`','`'):
                three_e=(num,j+2)
                remove_list.append((three_s,three_e))
                three_s=(-1,-1)
                three_e=(-1,-1)
                check_three=False
print(remove_list)

