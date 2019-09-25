S = 0
for i in range(int(input())):
    a = int(input())
    S += (a//10)**(a%10)
print(S)