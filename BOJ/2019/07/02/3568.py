L=input().split(" ")
L2=[]

and_cnt=[]
br_cnt=[]
st_cnt=[]

L[-1]=L[-1].replace(";","")

L2.append(L[0])
i=1
while i<len(L):
    if len(L[i]) == L[i].count('&') + L[i].count('[]') + L[i].count('*'):
        
        L2.append(L[i+1]+L[i])
        i+=1
    else:
        L2.append(L[i])
    i+=1

L=L2[:]

for i in range(1,len(L)):
    L[i]=L[i].replace(",","")
    if not L[i] == "":
        print(L[0],end="")
        for j in range(len(L[i])-1,-1,-1):
            if L[i][j]=="&" or L[i][j]=="[" or L[i][j]=="]" or L[i][j] =="*":
                if L[i][j]=="[":
                    print("]",end="")
                elif L[i][j] == "]":
                    print("[",end="")
                else:
                    print(L[i][j],end="")
        print("",end=" ")
        for j in range(len(L[i])):
            if not (L[i][j]=="&" or L[i][j]=="[" or L[i][j]=="]" or L[i][j] =="*"):
                print(L[i][j],end="")
        print(";")