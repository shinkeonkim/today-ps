def f(s):
    if s == s[::-1]:
        return True
    return False 

a = input()
ans = len(a) * 2

for i in range(len(a)+1):
    k = a[:i]
    if f(a + k[::-1]):
        print(len(a)+i)
        break