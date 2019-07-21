a=list(input().split())
error_list = ['i','pa','te','ni','niti','a','ali','nego','no','ili']

for i,j in enumerate(a):
    if i == 0:
        print(j[0].upper(),end = "") 
    else:
        if j not in error_list:
            print(j[0].upper(),end = "")