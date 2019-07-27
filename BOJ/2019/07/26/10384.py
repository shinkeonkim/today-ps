n=int(input())
for i in range(n):
    D = dict()
    for j in range(ord('a'),ord('z')+1):
        D[j] = 0
    a=input()
    a=a.lower()

    for j in a:
        if ord('a') <= ord(j) <=ord('z'):
            D[ord(j)] += 1
    
    num = min(D.values())
    
    print("Case {}:".format(i+1),end=" ")
    if num == 0:
        print("Not a pangram")
    elif num ==1:
        print("Pangram!")
    elif num ==2:
        print("Double pangram!!")
    else:
        print("Triple pangram!!!")