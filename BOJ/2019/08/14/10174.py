def f(S):
    for i in range(len(S)//2):
        if S[i] != S[len(S)-i-1]:
            return False
    return True

for i in range(int(input())):
    s=input().lower()
    if f(s):
        print("Yes")
    else:
        print("No")