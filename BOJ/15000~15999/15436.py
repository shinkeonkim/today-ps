n,k=map(int,input().split())

z= 1

for i in range(1,k+1):
    z *= 2

    if z >= n:
        print("Your wish is granted!")
        break
else:
    print("You will become a flying monkey!")