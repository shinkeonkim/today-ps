a = int(input())
if a % 2 == 0:
    print("I LOVE CBNU")
else:
    for x in range(a):
        print(end="*")
    print()

    for y in range(a//2+1):
        for x in range(a):
            if y==0:
                if (x <= a//2 and y == a//2 - x) or (x > a//2 and y == x - a//2):
                    print(end="*")
                    break
                else:
                    print(end=" ")    
            else:
                if (x <= a//2 and y == a//2 - x):
                    print(end="*")
                elif (x > a//2 and y == x - a//2):
                    print(end="*")
                    break
                else:
                    print(end=" ")
        print()
