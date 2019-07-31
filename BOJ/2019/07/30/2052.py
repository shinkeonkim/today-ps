a=2**int(input())
b=10
print("0.",end="")
while b%a != 0:
 print(b//a,end="")
 b -= (b//a)*a
 b*=10
print(b//a)