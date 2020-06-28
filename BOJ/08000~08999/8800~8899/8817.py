n = int(input())
for i in range(n):
    a,b = map(int,input().split())
    if a <= b:
        print("Hektor")
        continue

    k = (a-1)//b
    if (a-1)%b > 0:
        k+=1
    if k%2==0:
        print("Hektor")
    else:
        print("Wiktor")
    